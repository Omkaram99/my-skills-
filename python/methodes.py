import mathToImport as math
print("*************** pleas open mathToImport before run *************** ", __name__, " \n\n")
print("1] Addition\n2] Subtraction\n3] Multiplication\n4] Division\n5] To exit")
c = 0
while c != 'exit':
    c = input("enter your option : ")
    if c == '1':
        print("Addition  is : ", math.sum(int(input("\nenter first value : ")), int(input("enter second value : "))))
    elif c == '2':
        print("subtraction is : ", math.sub(int(input("\nenter first value : ")), int(input("enter second value : "))))
    elif c == '3':
        print("multiplication is : ", math.mul(int(input("\nenter first value : ")), int(input("enter second value : "))))
    elif c == '4':
        print("division is : ", math.div(int(input("\nenter first value : ")), int(input("enter second value : "))))
    elif c == '5':
        c = 'exit'
