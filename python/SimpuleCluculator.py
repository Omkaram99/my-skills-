print("*****************---_________welcome to match____________---**************** ")
w = '1'
while w != '0':
    x = float(input("Enter first number : "))
    y = float(input("Enter second  number : "))
    print("choose in following :-\n1)Addition\n2)Subtraction\n3)multiplication\n4)Division")
    c = input()
    if c == '1':
        print("addtion is :", (x + y))
    elif c == '2':
        print("Subtraction is : ", (x - y))
    elif c == '3':
        print("multiplicationc is : ", (x * y))
    elif c == '4':
        print("division is : ", (x / y))
    w = input("Enter 0 to exit or any key to continue : ")
input()