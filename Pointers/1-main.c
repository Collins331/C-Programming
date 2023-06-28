#include <stdio.h>
/**
  * main - entry point
  *Return: always 0 (success)
  */
int main(void)
{
	int c;
	char l;

	printf("The address of variable 'c' is : %p\n", &c);
	printf("The address of variable 'l' is : %p\n", &l);

	return (0);
}
