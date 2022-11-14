class Student:
    school = 'my school'

    def __init__(self):
        self.marks1 = "marks"
        self.marks2 = "marks"

    # 1] instance method
    # a] get method or accessing method
    def get_marks1(self):
        return self.marks1

    def get_marks2(self):
        return self.marks2

    # b] set method or mutator
    def set_marks1(self, value):
        self.marks1 = value

    def set_marks2(self, value1):
        self.marks2 = value1

    # 2] class method
    @classmethod
    def get_school(cls):
        return cls.school

    # 3] static method
    @staticmethod
    def say_hello():
        print("hello")


print("school name : ", Student.get_school())
s1 = Student()
s1.set_marks1(input("Enter student 1 marks1 : "))
s1.set_marks2(input("Enter student 1 marks2 : "))

s2 = Student()
s2.set_marks1(input("Enter student 2 marks1 : "))
s2.set_marks2(input("Enter student 2 marks2 : "))
print("student 1 marks1 is", s1.get_marks1())
print("student 1 marks2 is", s1.get_marks2())
print("student 2 marks1 is", s2.get_marks1())
print("student 2 marks2 is", s2.get_marks2())
