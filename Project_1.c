#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int user, computer;
   srand(time(0));
    computer = rand() % 3 + 1;   

    printf("=== Rock Paper Scissors ===\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");

    printf("Enter your choice (1-3): ");
    scanf("%d", &user);

    printf("Computer chose: ");

    switch(computer)
    {
        case 1:
            printf("Rock\n");
            break;
        case 2:
            printf("Paper\n");
            break;
        case 3:
            printf("Scissors\n");
            break;
    }

    switch(user)
    {
        case 1: 
            if(computer == 1)
                printf("Match Draw!\n");
            else if(computer == 2)
                printf("Computer Wins!\n");
            else
                printf("You Win!\n");
            break;

        case 2:
            if(computer == 1)
                printf("You Win!\n");
            else if(computer == 2)
                printf("Match Draw!\n");
            else
                printf("Computer Wins!\n");
            break;

        case 3: 
            if(computer == 1)
                printf("Computer Wins!\n");
            else if(computer == 2)
                printf("You Win!\n");
            else
                printf("Match Draw!\n");
            break;

        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}