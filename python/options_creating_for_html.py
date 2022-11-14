option_list = []
print(" select which type of option 1) for country currency 2) for country mobile code", end=":")
type_of_option = input()
data = "1"
while data != "0":
    print("enter ", len(option_list) + 1, "data ", end=":")
    data = input()

    if data != "0":
        if type_of_option == "1":
            option_list.append(data.upper())
        elif type_of_option == "2":
            option_list.append(int(data))

option_list.sort()

print(option_list)

for i in range(len(option_list)):
    if type_of_option == "2":
        option_list[i] = "+"+str(option_list[i])

    print("<option value=\"", option_list[i], "\">", option_list[i], "</option>")
