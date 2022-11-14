class A:
    x = "from class A"


class B(A):
    y = 'from class B'


class C(B):
    z = 'from class C'


class D(C):
    w = 'from class D'


obj1 = A()
print(obj1.x)
obj2 = C()
print(obj2.x, obj2.y, obj2.z)
obj3 = D()
print(obj3.w, obj3.x, obj3.y)
