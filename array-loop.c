#include <stdio.h>
/**
*main - entry to the loop
*
*Return: Always 0(success)
*/
int main(void)
{
	int colly[3][4] = {{2, 4, 5, 7}, {7, 4, 8, 3}, {9, 6, 1, 0}};/*multidimensional array declaratio*/
	int c, l;

	/*for loop*/
	for (c = 0; c < 3; c++)
	{
		for (l = 0; l < 4; l++)
		{
			printf("%d\n", colly[c][l]);
		}
	}
	return (0);
}
