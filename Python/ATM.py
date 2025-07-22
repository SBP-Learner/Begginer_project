balance = 100000.0
PIN = input("Creat your PIN : ")
print(f"Your PIN is {PIN}.\n")

def withdraw () :
 global balance # to access and modify the variable in this following function
 global PIN
 try : # code which can give error such as string input in int function 
  NPIN = input("Enter your PIN : ")
  if NPIN != PIN :
   print("Invalid Pin.")
   return
  else :
   withdraw_amount = float(input("Enter the amount you want to withdraw :"))
   if (withdraw_amount < balance) and (withdraw_amount > 0):
    print(f"\nYou have successfully withdrawn {withdraw_amount} rupees.")
    balance -= withdraw_amount
   else :
    print("\nInsufficient balance or invalid amount.")
 except :# what to show when error occurs.
  print("Invalid input.")

def deposit () :
 global PIN
 global balance
 try :
  NPIN = input("Enter your PIN : ")

  if NPIN != PIN :
   print("Invalid Pin.")
   return
  deposit_amount = float(input("Enter the amount you want to deposit :"))
  if (deposit_amount >= 0) :
   balance += deposit_amount
   print(f"\nYou have successfully deposited {deposit_amount} rupees.")
  else :
    print("\nInvalid amount.")
 except :
   print("Invalid input.")

 
def bal () :
 global balance
 global PIN
 try :
  NPIN = input("Enter your PIN : ")
  if NPIN != PIN :
   print("Invalid Pin.")
   return
  else :
   print(f"\nYour current balance is {balance} rupees.")
 except :
   print("Invalid input.")


while True :
 print("\n------------Welcome-----------")
 print("1. Withdraw money.")
 print("2. Deposite money.")
 print("3. Check balance.")
 print("4. Exit.")

 choose = input("Enter the option from above options to execute : ")

 if choose == '1' :
  withdraw()
 elif choose == '2' :
  deposit()
 elif choose == '3' :
  bal()
 elif choose == '4' :
  print("Exiting..")
  break
 else :
  print("Invalid choice.")