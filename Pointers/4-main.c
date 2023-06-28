#include <stdio.h>
/**
  * main - entry point
  *Return: always 0 (success)
  */
int main(void)
{
	int c;
	int *l;

	/* "*" is a deference operater */
	c = 331;
	l = &c;

	printf("value of 'c' is: %d\n", c);
	printf("address of 'c' is: %p\n", &c);
	printf("value of 'l' is: %p\n", l);

	*l = 2003;/*Declaration of l*/

	printf("value of 'c' is : %d\n", c);

	return (0);
}
