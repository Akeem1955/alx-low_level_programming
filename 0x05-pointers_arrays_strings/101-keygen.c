#include<stdio.h>
#include<time.h>
#include<stdlib.h>

/**
 * main - generate password
 * Return:0
 */
int main(void)
{
	char pwd[71];

	int random, i;

	srand(time(0));
	for (i = 0; i < 70; i++)
	{
		random = (rand() % 93 + 33);
		pwd[i] = random;
	}
	pwd[i] = '\0';
	printf("%s", password);
	return (0);
}
