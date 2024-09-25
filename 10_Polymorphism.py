# Polymorphism allows objects of different classes to be treated as objects of a common super class. It can also refer to the ability of a function or method to work on objects of different types.


class Animal :
    def sound(self):
        print('Animal makes a sound.')
        
class Dog (Animal):
    def sound(self):
        print('Dog barks.')

an = Animal()
dog = Dog()

for ani in (an, dog):
    ani.sound()