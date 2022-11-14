add = lambda a, b: a + b
mul = lambda a, b: a*b
sub = lambda a, b: a-b
div = lambda a, b: a/b

print("\t\t\t ********************* calculation using lambda **************************\n")
e = 0
while e != 'exit':
    x =int(input(" Enter first value : "))
    y =int(input("Enter second value : "))
    e1 = 0
    while e1 != 're':
        print("\n1] Addtion\n2] subtraction\n3] Multiplication\n4] Division\n5] To enter new values\n6] To 'EXIT'")
        se = input("Select your option : ")
        if se == '1':
            print(add(x,y))
        elif se == '2':
            print(sub(x,y))
        elif se == '3':
            print(mul(x,y))
        elif se == '4':
            print(div(x,y))
        elif se == '5':
            e1 = 're'
        elif se == '6':
            e1 = 're'
            e = 'exit'
print("\t\t\t *************************** thank you for using *******************************")