#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

int main() {
     printf("____Welcome to____\n");
    printf("____Number guessing game____\n");
    printf("\n");
    
   int a;
    int min = 0, max = 9;
  int random,played = 0;
  int correct = 0;
  char again;
  srand(time(NULL));
    do {
    
    printf("\nGuess a number from (0-9)\n");

    if (scanf("%d", &a) != 1) {
        printf("Invalid input.\nPlease enter a number between 0 to 9.\n\n");

        while (getchar() != '\n');
    }
    else if (a >= 0 && a < 10) {
        random = rand() % (max - min + 1) + min;
    if (a == random) {
        printf("\nHurray! You guessed right\n");
        correct ++;
    } else {
        printf("\nOops! Wrong guess.\n");
    }
    printf("You guessed %d.\nThe number was %d\n",a, random);
    played ++;
} else {
    printf("Invalid number.\n\n");
    while (getchar() != '\n');
    
}
    printf("Do you want to continue? (Y/N) : ");
    scanf(" %c", &again);
    while (getchar() != '\n');

  } while (again == 'Y' || again == 'y');

  printf("\nThank you for playing.\n");
  printf("You played %d games.\n", played);
  printf("You guessed %d correct.\n", correct);
  printf("Your score is %d/%d\n",correct,played);

  if (played > 0 && correct > 0) {
  printf("Your win rate is %.2f%%\n",((float)correct * 100) / played);
}

    return 0;
}