t = []
e = 'run'
while e != "exit":
    l = len(t)
    print(" enter the element to add or enter exit to stop ", l, " : ", end="")
    e = input()
    if e != "exit":
        t.append(e)


print(list(t))
print(tuple(t))
print(set(t))

