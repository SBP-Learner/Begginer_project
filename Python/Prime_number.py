import math
def prime (n) :
 if n > 1:
  for i in range(2, int(math.sqrt(n))+1) :
    if n % i == 0 :
     return False
  return True
 else :
  return False


while True :
 print("-------Welcome-------\nSelect one of the following.")
 print("1. Enter Prime number identifier program.\n2. Exit the program.")
 choose = input("Choose one of the above option :")
 if choose == '1' :
  try :
   num = int(input("Enter a number : "))
   
   if prime(num) == True:
    print("It is a prime number.")
   else :
    print("It is not a prime number.") 
  except :
   print("Invalid input.")
 elif choose == '2':
  print("Exiting the program...")
  break
 else :
  print("Invalid choice.")