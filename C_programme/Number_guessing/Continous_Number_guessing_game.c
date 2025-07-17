#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

int main() {
    // Number guessing game (Continous loop) Everytime the number changes
    printf("____Welcome to____\n");
    printf("____Number guessing game____\n");
    printf("Warning : This game changes the random number every time you make a guess.\n");
    printf("Game mode : Extreme difficulty(Win on luck)\n");
    printf("\n");
    
    int a;
    int min = 0, max = 9;
    int random, correct = 0, played = 0;
    srand(time(NULL));
    
    
    
   do { 
    if (played == 0) {
        printf("Guess a number from (0-9)\n");
    }
    else {
        printf("Game restarts,\nGuess a new number from (0-9)\n");
    }
    if (scanf("%d", &a) != 1) {
        printf("Invalid input.\nPlease enter a number between 0 to 9.\n\n");

        while (getchar() != '\n');
        continue;

    }
    if (a >= 0 && a < 10) {
        random = rand() % (max - min + 1) + min;
    if (a == random) {
        printf("\nHurray!\n");
        correct++;
    } else {
        printf("\nOops!!\n");
    }
    printf("You guessed %d.\nThe number was %d\n",a, random);
    played++;
} else {
    printf("Invalid number.\nTry again.\n\n");
}
  } while (random != a);

  printf("\nCongratulations! You guesses the right number.\n\n");
   
   if (played > 1) {
  printf("You took %d tries.\n", played);
  } else if (correct == 1 && played == 1) {
    printf("Wonderful! You guessed on first try\n");
    }

  printf("Your score is %d/%d\n",correct,played);

  if (played > 0 && correct > 0) {
  printf("Your win rate is %.2f%%\n in %d tries", ((float)correct * 100) / played, played);
  } 
  printf("\nThank you for playing.\n");
      return 0;
}