#include "main.h"
#include<stdio.h>

int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;

	ptr = _strncat(s1, s2, 1024);
	printf("%s\n", ptr);
	return (0);
}
