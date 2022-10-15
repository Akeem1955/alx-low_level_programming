#include<stdio.h>
/**
 * main - printing a-z
 *
 * Return:0(sucess)
 */
int main(void)
{
	int i, j, k, l;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j < 57; j++)
		{
			putchar(i);
			putchar(j);
			putchar(' ');
			for (k = 48; k <= 57; k++)
			{
				for (l = 48; l <= 57; l++)
				{
					if (k >= i && l > j && i != 57 || j != 56)
					{
						putchar(k);
						putchar(l);
						putchar(',');
						putchar(' ');
					} else
					{
						putchar(k);
						putchar(l);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
