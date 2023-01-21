a,b,c = input("Enter the numbers : ").split()

if (int(a) > int(b) )  and int(a) > int(c):

        print(f"{a} is greatest number")

elif int(b) > int(a) and int(b) > int(c):

        print(f"{b} is greatest number")

else:

    print(f"{c} is greatest number")