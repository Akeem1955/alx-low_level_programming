#include<stdio.h>
#include<time.h>
#include<stdlib.h>

/**
 * main - generate password
 * Return:0
 */
int main(void)
{
	char pwd[51];

	int random, i;

	srand(time(0));
	i = 0;
	while (i <  50)
	{
		random = rand() % 127;
		if (random > 33)
		{
			if ((i % 2 == 0) && (random >= 34 && random <= 64))
			{
				pwd[i] = random;
				i++;
			} else if ((i % 7 == 0) && (random >= 65 && random <= 126))
			{
				pwd[i] = random;
				i++;
			} else if (random >= 57 && random <= 72)
			{
				pwd[i] = random;
				i++;
			}
		}
	}
	pwd[i] = '\0';
	printf("%s", pwd);
	return (0);
}
