#include<stdio.h>
#include<time.h>
#include<stdlib.h>

/**
 * main - generate password
 * Return:0
 */

int main(void)
{
	srand(time(0));
	char *pwdGen, *pwdGen2, *pwdGen3, *pwdGen4, *pwd;

	int len, i;

	i = 0;
	len = (rand() % 8) + 9;
	pwdGen = "abcdefghijklmnopqrstuvwxyz";
	pwdGen2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	pwdGen3 = "@#$!*?&%]";
	pwdGen4 = "1234567890";
	while (len >= 0)
	{
		if (i == 0)
		{
			random = rand() % 26;
			pwd[i] = pwdGen2[random];
		}
		else if (i < 5)
		{
			random = rand() % 26;
			pwd[i] = pwdGen[i];

		}
		else if (i < 9)
		{
			random = rand() % 10;
			pwd[i] = pwdGen4[random];
		}
		else
		{
			random = rand() % 9;
			pwd[i] = pwdGen3[random];
		}
		len--;
		i++;
	}
	printf("%s",pwd");
	return (0);
}
