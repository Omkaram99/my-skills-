x = input("enter value : ")
print(x)
for a in range(len(x)):
    if x[a].isupper():
        print(x[a].lower(), end="")
    elif x[a].islower():
        print(x[a].upper(), end="")
    else:
        print(x[a], end="")
