#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main 
*
* Return: Always 0 (Sucess!)
*/

int main(void)
{
	int ch;
	int n;
	for (ch = 48; ch <= 57; ch++)
	{
		for (n =49; n <= 57; n++)
		{
			if (n > ch)
			{
				putchar(ch);
				putchar(n);
				if (ch !=56 || != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
