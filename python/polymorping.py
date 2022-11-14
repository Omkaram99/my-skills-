class A:
    def all(self):
        print("from A")


class B:
    def all(self):
        print("from B")


class C:
    def all(self):
        print("from C")


class D:
    def all(self):
        print("from D")


def poly(obj):
    obj.all()


x = A()
y = B()
z = C()
w = D()
poly(x)
poly(y)
poly(z)
poly(w)
