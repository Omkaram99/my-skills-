x = int(input("Enter the marks:"))
if x >= 35:
    if 35 < x < 50:
        print(x, "passed 35-50")
    elif 50 < x <= 70:
        print(x, "passed 51-70")
    elif 70 < x <= 80:
        print(x, "passed 71-80")
    elif 80 < x <= 90:
        print(x, "passed 81-90")
    elif x > 90:
        print(x, "passed 90++")
else:
    print(x, "failed")
