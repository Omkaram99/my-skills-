class A:
    def overload(self):
        print("from class A")
    def nonoverload(self):
        print("from class A")

class B(A):
    def overload(self): # this will overload in class A
        print("from class B")


objB = B()
objA = A()
objB.overload()
objB.nonoverload()
objA.overload()
