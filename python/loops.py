w = 1
while w != '0':
    x = int(input("Enter any value : "))
    y = x + 1
    for a in range(x):
        # print(end=" ")
        g = int(y - a)
        for b in range(g):
            print(end=" ")
        for c in range(a):
            print("*", end="")
        print()
    w=input("Enter  0 to exit ro Enter any value to continue")
