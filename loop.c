#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<math.h>


int main(void)
{
	int c, l, k;

	printf("Enter your favorite number:\n");
	scanf("%d", &c);

	for (l = 0; l < c; l++)
	{
		for (k = 0; k < l; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return (0);
}
