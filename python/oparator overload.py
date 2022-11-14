class student:
    def __init__(self, m1, m2):
        self.m1 = m1
        self.m2 = m2

    def __add__(self, other):
        m1 = self.m1 + other.m1
        m2 = self.m2 + other.m2
        return student(m1, m2)

    def __gt__(self, other):
        s1m = self.m1 + self.m2
        s2m = other.m1 + other.m2
        print("s1 total is : ", s1m, "s2 total is : ", s2m)
        if s1m > s2m:
            return True
        elif s1m < s2m:
            return False


s1 = student(58, 89)
s2 = student(86, 75)
s3 = s1 + s2

print(s3.m1, " ", s3.m2)
print("s1&s2 m1 total is  : ", s1.m1 + s2.m1)
print("s1&&s2 m2 total is  : ", s1.m2 + s2.m2)

if s1 > s2:
    print("\ns1 wins 🎓")
elif s1 < s2:
    print("\ns2 wins 🎓")
else:
    print("\ndraw 😶")
