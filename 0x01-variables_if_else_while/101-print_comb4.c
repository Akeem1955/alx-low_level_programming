#include<stdio.h>
/**
 * main - printing a-z
 *
 * Return:0(sucess)
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i < 57; i++)
	{
		for (j = 48; j < 57; j++)
		{
			if (i != j && i < j)
			{
				for (k = 48; k < 57; k++)
				{
					if (j != k && j < k)
					{
						putchar(i);
						putchar(j);
						putchar(k);
						if (k == 57 && j == 56 && i == 55)
						{
							putchar('\n');
						} else
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	return (0);
}
