#include <stdio.h>
/**
*main - entry point to the loop
*
*Return: Always 0(Success)
*/
int main(void)
{
	int c, l;

	/*Outer loop*/
	for (c = 1; c <= 5; c++)
	{
		printf("Collins: %d\n", c);/*executes the loop 5 times*/
		/*Inner loop*/
		for (l = 1; l <= 10; l++)
		{
			printf("\t\tLincoln: %d\n", l);/*executes loop 10 times*/
		}
	}
	return (0);
}
