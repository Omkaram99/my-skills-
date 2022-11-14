class a:
    def __init__(self, x, y, z):
        self.x = x
        self.y = y
        self.z = z

    def info(self):
        print(self.x, self.y, self.z)


obj = a(input("enter name : "), input("enter date of birth :"), input("enter gender : "))
obj.info()

