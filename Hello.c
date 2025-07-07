#include <stdio.h>
#include <math.h>

#define true = 1;
#define false = 0;
enum suit {
    club = 0,
    diamonds = 10,
    hearts = 20,
    spades = 3
} card;

int main() {
    // Code for vote eligibility check
    /*int a;
    printf("Enter your age : ");
    scanf("%d", &a);
    if (a > 18) {
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
    if (a <= 1) {
        printf("Nor prime neither composite.\n");
    } else {
        for (i = 2;i*i <= a; i++) {
            if (a%i == 0) {
                prime = 0;
                break;
            }
        }
    } 
    if (prime) {
    printf("It is a prime number.\n");
    }
    else {
        printf("It is a Composite number.\n");
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

    //
    return 0;
}

