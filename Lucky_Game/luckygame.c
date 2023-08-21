#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/*
 *luckygame: the entry point to the game
 *Description: doesn't receive any argument
 *Return: 1(success) else -1(failed)
 */
int luckygame(void)
{
    int num;
    int lucky_num = 8;
    int attempts = 3;
    int trial = 1;
    /*Welcomes the user and instructs them on how to play*/
    printf("Welcome to lucky number guess game\n");
    sleep(1);
    printf("You have 3 attempts to guess the number\n");

    while (trial <= 3)
    {
        printf("Please enter your guess for lucky number\n");
        /*Prompts the user to give a guess of the lucky number*/
        scanf("%d", &num);

        if (num == lucky_num)
        {
            printf("Congratulations you won, The lucky number is 8\n\n");
            /*Congratulates the user, and exits the game*/
            return (1);
        }
        else
        {
            /*If the user fails the guess, a prompt is displayed.*/
            printf("Oopps!! your answer was wrong, please try again\n");
            sleep(1);
            printf("You have %d attempts left\n\n", attempts - trial);
            if ((attempts - trial) == 0)
            {
                printf("You lost!!\nStart a new game.\n\n");
                return (-1);
            }
        }
        trial++;
    }
    return (0);
}
/*
 *main - entry point to the application
 *Return: always 0
 */
int main(void)
{
    int num;

    luckygame();
    /*This is an infinite loop incase the user wants to continue playing the game*/
    while (1)
    {
        printf("Do you want to start new game?\nSelect an option below\n\n");
        printf("1. Start new game\n2. Exit the game\n\n");
        scanf("%d", &num);

        if (num == 1)
        {
            printf("Loading...\n\n");
            sleep(3);
            luckygame();
        }
        else if (num == 2)
        {
            printf("Exiting...\n");
            sleep(2);
            printf("Thank you for playing the game\n");
            sleep(2);
            printf("Goodbyee...\n");
            exit(1);
        }
        else
        {
            printf("You entered invalid option\nPlease try again...");
            sleep(2);
        }
    }

    return (0);
}