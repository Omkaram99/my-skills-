import datetime as dt
pt = dt.datetime.now()

print(pt)
f1 = pt.strftime("%d-%m-%Y")
print(f1)
x = ""
if pt.strftime("%d") == '1' or pt.strftime("%d") == '31':
    x = 'st'
elif pt.strftime("%d") == '2':
    x = 'nd'
elif pt.strftime('%d') == '3':
    x = 'rd'
else:
    x = 'th'
print("present date and time is", end=" : ")
print(pt.strftime("on %A "), pt.strftime("%d" + x + " %b %Y "), pt.strftime("at %I:%M:%S %p"))

