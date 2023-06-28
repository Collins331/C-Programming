#include <stdio.h>
int main(void)
{
	int c;
	int l;

	c = 0;

	while(c <5)
	{
		l = 0;
		while (l < 10)
		{
			printf("Collins ");
			l++;
		}
		printf("\n");
		c++;
	}
	return (0);
}
