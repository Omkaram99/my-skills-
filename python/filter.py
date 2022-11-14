def get_even(b):
    b = int(b)
    return b % 2 == 0


def get_odd(b):
    b = int(b)
    return b % 2 != 0


print("\n\n\t\t\t\t\t*************** filter ***************\n\n")
lis = []
e = 0
print("enter values in list(to stop enter exit)")
while e != "exit" and e != "EXIT":
    print("enter value ", len(lis) + 1, end=" : ")
    e = input()
    if e != 'exit' and e != 'EXIT':
        lis.append(e)
print(lis)
print("\n1] filter even numbers\n2] filter odd numbers\n3] filter even and odd numbers ")
c = input("enter your option ")
if c == '1':
    even = list(filter(get_even, lis))
    print("evens in the list is ", even)
elif c == '2':
    odd = list(filter(get_odd, lis))
    print("odds in the list is ", odd)
elif c == '3':
    even = list(filter(get_even, lis))
    print("evens in the list is = ", even)
    odd = list(filter(get_odd, lis))
    print("odds in the list is = ", odd)
    