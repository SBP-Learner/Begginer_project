# include <stdio.h>
 
 int main() {

    // Currently in progress, Not completed.


 // ATM Machines
      printf("Welcome to ATM Machine\n");
     int PIN,EPin,choose;
     float balance = 10000,withdraw,deposit;
     char YES;
        printf("Create a 4 digit PIN : ");
        while (scanf("%d", &PIN) != 1 || PIN < 1000 || PIN > 10000) {
    printf("Invalid input. Please enter a 4 digit PIN : "); 
    while (getchar() != '\n'); // clear input buffer
}
        printf("Your PIN is %d\n.",PIN);
      do {
     printf("Select what you want to do\n");
        printf("1. Withdraw\n");
        printf("2. Deposit\n");
        printf("3. Check Balance\n");
    
        
        printf("Choose from 1-3 for proceeding.");
        while (scanf("%d", &choose) != 1 || choose < 1 || choose > 3) {
    printf("Invalid input. Please choose between 1 or 2 or 3: ");
    while (getchar() != '\n'); 
}

       switch(choose) {
        case 1 :
        printf("Enter your PIN : ");
         while (scanf("%d", &EPin) != 1 || EPin < 1000 || EPin > 10000) {
    printf("Invalid input. Please enter a 4 digit PIN : "); 
    while (getchar() != '\n'); 
}

        if (EPin == PIN) {
            printf("Enter the amount you want to withdraw : ");
            while (scanf("%f", &withdraw) != 1 || withdraw <= 0) {
    printf("Invalid input. Please enter a positive amount: ");
    while (getchar() != '\n');
}
            if (withdraw <= balance) {
                balance = balance - withdraw;
                printf("You have successfully withdrawn %.2f rupees.\n", withdraw);
            }
            else {
                printf("Not Enough balance.\n");
                
            }
            } else {
            printf("Wrong PIN.\n");
            
        }
            break;
        case 2 :
            printf("Enter your PIN : ");
           while (scanf("%d", &EPin) != 1 || EPin < 1000 || EPin > 10000) {
    printf("Invalid input. Please enter a 4 digit PIN : "); 
    while (getchar() != '\n'); 
}
            if (EPin == PIN) {
            printf("Enter the amount you want to deposit : ");
            while (scanf("%f", &deposit) != 1 || deposit <= 0) {
    printf("Invalid input. Please enter a positive amount: ");
    while (getchar() != '\n');
}
            if (deposit > 0) {
                balance = balance + deposit;
                printf("You have successfully deposited %.2f rupees.\n", deposit);
            } else {
                printf("Invalid amount.\n");
                
              }
            }   else {
            printf("Wrong PIN.");
            
        }
             break;
        case 3 :
            printf("Enter your PIN : ");
            while (scanf("%d", &EPin) != 1 || EPin < 1000 || EPin > 10000) {
    printf("Invalid input. Please enter a 4 digit PIN : "); 
    while (getchar() != '\n'); 
}
            if (EPin == PIN) {
                printf("Your account balance is %.2f rupees\n",balance);
                } else {
                    printf("Wrong PIN.\n");
                   
                } break;

        default :
         printf("Invalid choice.\n");
         
        }
        printf("Do you want to go to home screen?\nType (Y/N) : ");
        scanf(" %c",&YES);
    } while (YES == 'Y' || YES == 'y');

     
    printf("THANK YOU!\nCome again.");
    

    return 0;
}