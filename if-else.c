#include <stdio.h>
/**
*main - entry point
*
*Return: Always 0(success)
*/
int main(void)
{
	int grade;

	printf("Enter your grade:\n");
	scanf("%d", & grade);

	/*example of short hand expression of if else statement*/
	(grade > 74)? printf("You qualify to the following courses:\n1. Medicine & Surgery\n2. Computer Science\n3. Pharmacy\n4. Medical laboratory science\n5. Nursing\n6. Law\n") : printf("You qualify to pursue:\n1. Education\n3. Software Engineering\n4. Mechanical Engineering\n5. Civil Engineering\n6. Human Resource\n7. Bachelor of commerce\n");
		return (0);
}
