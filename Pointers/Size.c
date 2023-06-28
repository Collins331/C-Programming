#include <stdio.h>
/**
  * main - entry point
  *Return: always 0 (success)
  */
int main(void)
{
	printf("The size of int type of data is %lu bytes\n", sizeof(int));
	printf("The size of char type of data is %lu bytes\n", sizeof(char));
	printf("The size of float type of data is %lu bytes\n", sizeof(float));
	printf("The size of double type of data is %lu bytes\n", sizeof(double));

	return (0);
}
