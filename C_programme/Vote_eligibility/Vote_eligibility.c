#include <stdio.h>
int main() {
    // Code for vote eligibility check
    
    int a; // Declares a variable
    printf("Enter your age : "); // Directs the user for specific input
    scanf("%d", &a); // Takes a specific input from user
    if (a > 18) { // Checks the condition if true - executes, if false goes to else 
        printf("You are eligible to vote.\n");
    } else if (a > 0 && a < 18) {
        printf("You are not eligible to vote.\n");
    } else {
        printf("Invalid age.");
    }  
    return 0;
}