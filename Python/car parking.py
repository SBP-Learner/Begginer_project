car_parking_data = []
security_pin = 1234
def car_parking_user() :
    print("Welcome to Parking system, fill the following information to register your parking.")
    name = input("Enter your name : ")
    num = int(input("Enter your car number : "))
    entry = int(input("Enter the time you will enter(1-24) : "))
    exit = int(input("Enter the time you will exit(1-24) : "))
    PH = exit - entry
    if PH <= 0 : 
        print("Invalid time, Exit time should be greater than entry time.")
    RPH = 50
    total = PH * RPH
    print(f"\nHello {name}, \nCar number {num},")
    print(f"You will be charged {RPH} rupees per hour,")
    print(f"Your total charge is {total}rupees.")

    stored_data = {
        "name": name,
        "car_number": num,
        "charge": total
    } 
    car_parking_data.append(stored_data)

def car_parking_Admin() :
    print("Admin access required. ")
    PIN = int(input("Enter your 4 digit security PIN : "))
    if PIN != security_pin :
     print("Invalid PIN, Access denied.")
     return

    print("\n--------Parking Data----------")
    print("Welcome sir, Here are the data of parking.\n")
    income = 0
    if not car_parking_data :
     print("NO data available.") 
     return
    
    for stored_data in car_parking_data :
        print(f"Name of car owner : {stored_data['name']},\nCar number : {stored_data['car_number']},\nCharge :{stored_data['charge']}")
        income = income + stored_data["charge"]
    print(f"\nTotal money collected is {income} rupees")

while True:
   print("\n------- Parking Menu ---------")
   print("1. Park car(for user)")
   print("2. View records(for Admin)")
   print("3. Exit")

   choose = input("Enter your choice 1/2/3 : ")
   if choose == '1' :
      car_parking_user()
   elif choose == '2' :
      car_parking_Admin()
   elif choose == '3' :
      print("Exiting... Thank you!")
      break
   else :
      print("Invalid choicee.")