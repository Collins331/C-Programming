#include <stdio.h>
/**
*main - entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int num1;
	int num2;
	int num3;

	printf("Enter your first phone number:\n");
	scanf("%d", &num1);
	printf("Enter your second phone number:\n1. %d\n2. ", num1);
	scanf("%d", &num2);
	printf("Enter your third phone number:\n1. %d\n2. %d\n3.  ", num1, num2);
	scanf("%d", &num3);
	printf("Your phone numbers are:\n1. %d\n2. %d\n3. %d\n", num1, num2, num3);
	return (0);
}
