#include <stdio.h>
/**
*main - entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int marks;
	int points;

	printf("How many marks did you score in your English examinations:\n");
	scanf("%d", & marks); /*Inputs the number of points scored by the candidate*/

	points = (marks * 12)/100;

	switch(points)
	{case 1:
		printf("You scored very poorly:\n\t\tGrade E\n");
		break;

	case 2:
		printf("You scored poorly:\n\t\tGrade D-\n");
		break;

	case 3:
		printf("You scored poor:\n\t\tGrade D\n");
		break;

	case 4:
		printf("You scored moderately poor\n\t\tGrade D+\n");
		break;

	case 5:
		printf("You scored moderately good\n\t\tGrade C-\n");
		break;

	case 6:
		printf("You scored averagely good\n\t\tGrade C\n");
		break;

	case 7:
		printf("You scored impresively good\n\t\tGrade C+\n");
		break;

	case 8:
		printf("You scored very good\n\t\tGrade B-\n");
		break;

	case 9:
		printf("You scored very very good, keep it up\n\t\tGrade B\n");
		break;

	case 10:
		printf("You scored excellent\n\t\tGrade B+\n");
		break;

	case 11:
		printf("You scored very excellent\n\t\tGrade A-\n");
		break;

	case 12:
		printf("You are the champion in the examination KUDOS🎁🎁🎉🎉!!!, WELL DONE\n\t\tGrade A💕👏👏\n");
		break;
	default:
		printf("Error!!!!! out of range\n");
	}
	return (0);
}
