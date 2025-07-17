# include <stdio.h>
 
 int main() {

    // Currently in progress, Not completed.


 // ATM Machines
      printf("Welcome to ATM Machine\n");
     int PIN = 9999,EPin,choose,
         balance = 10000,withdraw,deposit,Exit = 0;
    
      
     printf("Select what you want to do\n");
        printf("1. Withdraw\n");
        printf("2. Deposit\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        
        if (scanf("%d", choose)) {
       switch(withdraw) {
        case 1 :
        printf("Enter your PIN : ");
        scanf("%d", &EPin);
        if (EPin == PIN) {
            printf("");
            }
            break;
        default :
         printf("");
        }
        return 0;
    }
}