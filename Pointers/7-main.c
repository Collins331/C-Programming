#include <stdio.h>
/**
  * modify_my_param - set int 33
  *@m: a pointer , the integer we want to set to 33
  */
void modify_my_param(int *m)
{
	printf("values of 'm' : %p\n", m);
	printf("address of 'm' : %p\n", &m);

	*m = 33;
}
/**
  *main - entry point 
  *Return: always 0(success)
  */
int main(void)
{
	int c;
	int *l;

	l = &c;
	c = 98;

	printf("value of 'c' : %d\n", c);
	printf("address of 'c' : %p\n", &c);
	printf("value of 'l' : %p\n", l);
	printf("address of 'l' : %p\n", &l);
	//modify_my_param(l);
	printf("value of 'c' after the function call: %d\n", c);

	return (0);
}
