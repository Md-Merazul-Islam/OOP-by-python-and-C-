
"""
======Method Overloading=====
Method overloading refers to defining multiple methods with the same name but with different parameter lists in the same class. It allows methods to handle different numbers or types of arguments 
"""


class Calculator:
    def sum(self, num1, num2, num3=None):
        if num3 is None:
            return num1 + num2
        return num1 + num2+num3
    



cal = Calculator()
print(cal.sum(10, 20))

print(cal.sum(10, 20, 30))


# ------------------------------------------------------------------------------------------------
class Calculator:
    def sum(self, *args):
        return sum(args)  # Using Python's built-in sum function

cal = Calculator()
print(cal.sum(10, 20))        # Output: 30
print(cal.sum(10, 20, 30))    # Output: 60
print(cal.sum(5, 10, 15, 20)) # Output: 50
