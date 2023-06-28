#include <stdio.h>
/**
  * main - entry point
  *Return: always 0 (success)
  */
int main(void)
{
	int c;
	int *l;

	c = 331;
	l = &c;

	printf("Address of variable 'c' : %p\n", &c);
	printf("The value of variable 'l' : %p\n", l);

	return (0);
}
