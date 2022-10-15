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
			for (k = 48; k <= 57; k++)
			{
				if (k == 48)
				{
					k = i;
				}
				for (l = 48; l <= 57; l++)
				{
					if (l == 48 && k <= i)
					{
						l = j + 1;
					}
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i != 57 || j != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
