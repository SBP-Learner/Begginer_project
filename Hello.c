#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

#define True 1
#define False 0

// enum function
/* enum Cards { // These are the tags created using enums. 
                   Theit values can't be changed after assigning. 
                   They only store integers.
    club = 1,
    diamonds = 10,
    hearts = 20,
    spades = 88
} card; */
  


int main() {
    // Code for vote eligibility check
    /*int a; // Declares a variable
    printf("Enter your age : "); // Directs the user for specific input
    scanf("%d", &a); // Takes a specific input from user
    if (a > 18) { // Checks the condition if true - executes, if false goes to else 
        printf("You are eligible to vote.\n");
    } else if (a > 0 && a < 18) {
        printf("You are not eligible to vote.\n");
    } else {
        printf("Invalid age.");
    }  */

    // Code for prime number identifier (Non-continous)
    // for continous we use do while loop

    /* int a,i,prime = 1;
    printf("Enter a number : ");
    scanf("%d", &a);
    if (a <= 1) { //Excludes all other numbers which is not Natural. 
        printf("Nor prime neither composite.\n");
    } else { // Creates a loop from 2 to the given number
        for (i = 2;i*i <= a; i++) {
            if (a%i == 0) { // Checks if the number is composite
                prime = 0; // Assigns a false value for prime variable
                break; // breaks the loop if the given number gives 0 as reminder by dividing it by the numbers between 2-a
            }
        }
    } 
    if (prime) { // After exiting the loop it checks if the prime variable still has 1 
    printf("It is a prime number.\n"); // Displays that number is prime
    }
    else { // if the number becomes 0 by the loop 
        printf("It is a Composite number.\n"); // Dosplays its Composite
    } */

    
    // Simple calculator


    /* float a,b,operation;
    char choice;
    char op;
    printf("------Simple Calculator-------\n");
    do {
        printf("Enter first number : ");
        scanf("%f", &a);
        printf("Enter the operator(+,-,*,/,^) : \n");
        scanf(" %c", &choice);
        printf("Enter second number : \n");
        scanf("%f", &b);
        
        switch(choice) {
            case '+' :
            operation = a + b;
            printf("%.2f\n",operation);
            break;
            case '-' :
            operation = a - b;
            printf("%.2f\n",operation);
            break;
            case '*' :
            operation = a * b;
            printf("%.2f\n",operation);
            break;
            case '/' :
            if (b == 0){
                printf("Second number cannot be 0.\n");
            } else {
            operation = a / b;
            printf("%.2f\n",operation);
                }
            break;
            case '^' :
            operation = pow(a,b);
            printf("%.2f ^ %.2f = %.2f\n",a,b,operation);
            break;
            default :
            printf("Invalid operator\n");
        }
        printf("Do you want to continue(Y/N) : ");
        scanf(" %c",&op);
    } while (op == 'Y' || op == 'y');
    printf("Thank you!\n"); */


    


 
    // Enum testing

    /* card = club;
	printf("Size of enum variable = %d bytes", sizeof(card));
    printf("Enum variable = %d", (card); */	

    // Number guessing game 
    printf("____Welcome to____\n");
    printf("____Number guessing game____\n");
    printf("\n");
    printf("Guess a number from (0-9)\n");
   int a;
    int min = 0, max = 9;
  int rd_num;
  srand(time(NULL));
  do {
    
    
    rd_num = rand() % (max - min + 1) + min;
    printf("Guess a number : \n");
    scanf("%d", &a);
    printf("You guessed %d.\nThe number was %d\n\n",a, rd_num);
  } while (rd_num != a);
  printf("Congratulations! You guesses the right number.");
    return 0;

    return 0;
}

