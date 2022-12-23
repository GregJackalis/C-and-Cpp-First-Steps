//
//  main.c
//  Guessing Game
//
//  Created by Grigorios Tsakalis on 27/10/22.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
    int luckyNumber = 0;
    int number = 0;
    time_t t1;
    int tries = 1;
    int triesLeft = 5;
    int point1 = 0;
    int point2 = 0;


    srand((unsigned)time(&t1));
    luckyNumber = (rand() % 100);

    printf("Welcome to the guessing game!\n");
    printf("Player1's Turn!");
        for (int i = 1; i <= 2; i++) {
            triesLeft = 5;
            tries = 0;
            if (i == 2) {
                printf("\nPlayer2's Turn!");
            }
            do {
                printf("\nPlease choose a number between (0-100): \n");
                scanf("%d", &number);

                if (number > luckyNumber) {
                    printf("\nThe number that you have insterted is larger than the lucky number.");
                    printf("\nYou have %d tries left!", (triesLeft - 1));
                }
                else if (number < luckyNumber) {
                    printf("\nThe number that you have insterted is smaller than the lucky number.");
                    printf("\nYou have %d tries left!", (triesLeft - 1));
                }
                else if (number == luckyNumber) {
                    printf("\nGongratulations! You have found the lucky number: %d", number);
                    printf("\nYou found it on the %d try!", tries);
                    if (i == 1) {
                        point1 = tries;
                    }
                    else if (i == 2) {
                        point2 = tries;
                    }
                }
                tries = tries + 1;
                triesLeft = triesLeft - 1;
            } while (luckyNumber != number && triesLeft > 0);
            if (luckyNumber != number) {
                printf("\nGame Over!");
            }
            if (triesLeft == 0) {
                if (i == 1) {
                    point1 = tries;
                }
                else if (i == 2) {
                    point2 = tries;
                }
            }
            printf("\n");
        }
        if (point1 == 5 && point2 != 5) {
        printf("Player1 didn't find it, but Player2 did! Player2 wins!");
        }
        else if (point1 != 5 && point2 == 5) {
        printf("Player2 didn't find it, but Player1 did! Player1 wins!");
        }
        else if (point1 < point2) {
            printf("Player1 wins! They found it first!");
        }
        else if (point2 < point1) {
            printf("Player2 wins! They found it first!");
        }
        else if (point2 == 5 && point1 == 5) {
            printf("Lucky number wasn't founded!");
        }
    printf("\n");
    
        exit(0);
}
