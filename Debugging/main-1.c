#include <stdio.h>
/**
*main - entry point
*
*Return: always 0(success)
*/
int main(void)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 1000;
	while (i < j)
	{
		k = j /98;
		i = i + k;
		printf("%d\n", i);
		j = j - 1;
	}
	return (0);
}
