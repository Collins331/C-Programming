#include <stdio.h>
/**
*main - entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int fahr, celsius, lower, upper, step;

	lower = 0; /*lower limit*/
	upper = 300; /*upper limit*/
	step = 20; /*step interval*/

	fahr = lower;
	while (fahr <= upper)
	{
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
	return (0);
}
