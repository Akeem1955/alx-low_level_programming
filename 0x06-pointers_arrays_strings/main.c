#include "main.h"
#include<stdio.h>

int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";


	printf("%d\n", _strcmp(s1, s2));
	return (0);
}
