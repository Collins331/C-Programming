#include <stdio.h>
#include <stdlib.h>
/**
*main - entry point
*
*Return: Always 0 (success)
*/
int main(void)
{
	char name[25];
	
	printf("Whats your full name:\n");
	fgets(name, 25, stdin);
	printf("Your full name is: %s\n", name);

	return (0);
}
