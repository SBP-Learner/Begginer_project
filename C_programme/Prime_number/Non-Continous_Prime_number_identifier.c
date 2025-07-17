#include <stdio.h> 

int main() {


// Code for prime number identifier (Non-continous)
    

     int a,i,prime = 1;
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
    } 
   return 0;
}