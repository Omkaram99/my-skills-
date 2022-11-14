print("\t\t\t--------------creating a list of details using dictionary ---------------  ")
e = 0
userdata = {}
x = input("Enter no.of elements to enter : ")
while e != int(x):

    for i in range(int(x)):
        print("Enter element ", i + 1, " key ", end=" : ")
        ke = input()
        print("Enter element ", i + 1, " key ", ke, end=" value : ")
        value = input()
        userdata[ke] = value
    e = int(x)

print(userdata)
c = 0
while c != 'exit' and c != 'EXIT':
    print("\t\t\t1] To add in dictionary \n\t\t\t2] To search in dictionary\n\t\t\t3] To print elements dictionary "
          "\n\t\t\tenter exit to end, your choose is:", end="")
    c = input()
    if c == '1':
        print("Enter element new key ", end=" : ")
        nke = input()
        print("Enter element  new key value ", nke, end=" value : ")
        value = input()
        userdata[nke] = value
    elif c == '2':
        se = input("enter the key to find in list : ")
        va = 0
        for sk,sv in userdata.items():
            if sk == se:
                va = userdata[se]
        if va != 0:
            print("The value of ", se, " is : ", va)
        else:
            print("entered key ", se, " is not in dictionary ")
    elif c == '3':
        print(userdata)


