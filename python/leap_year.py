a = int(input("Enter a year to check it is leap year of not : "))
if (a % 2 == 0) and (a % 4 == 0 ):
    print("Year is leap year")
else:
    print("Year is not leap year")