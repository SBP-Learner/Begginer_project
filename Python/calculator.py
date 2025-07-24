while True :
 print("-------Welcome to Python calculator------")
 try :
  num1 = float(input("Enter the first number : "))
  operator = input("Enter the operator (+,-,*,/,^): ")
  num2 = float(input("Enter the second number : "))
 
  if operator == '+' :
   sum = num1+num2
   print(f"Sum of {num1} and {num2} is {sum}") 
  elif operator == '-':
   sub = num1-num2
   print(f"Substraction of {num2} from {num1} is {sub}")
  elif operator == '*' :
   mult = num1*num2
   print(f"Product of {num1} and {num2} is {mult}")
  elif operator == '/' :
   if num2 == 0 :
     print(f"Denominator number cannot be zero.")
   else :
     div = num1//num2
     print(f"{num1} divided by {num2} is {div}")
  elif operator == '^' :
   pow = num1**num2
   print(f"{num1} to power {num2} is {pow}")
  else :
   print("invalid operator.")
 except :
   ("Invalid input.")

 choose = input("Do you want to continue?\nType Yes to continue : ")
 if choose != "Yes" and choose != "yes" and choose != "YES" :
  print("Exiting the program...")
  break