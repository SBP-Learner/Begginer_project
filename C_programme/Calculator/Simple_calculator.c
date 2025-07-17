#include <stdio.h>
#include <math.h>
int main() {
             // Simple calculator


    float a,b,operation;
    char choice;
    char options;
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
        scanf(" %c",&options);
    } while (options == 'Y' || options == 'y');
    printf("Thank you!\n");
    return 0;
}