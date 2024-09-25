class Animal :
    def sound (self):
        print('Some animal sound ')
        
class Dog(Animal):
    def sound (self):
        print('Dog barks')
class Cat(Animal):
    def sound (self):
        print('Cat meows')

A = Animal()
A.sound()


d = Dog()
d.sound()


c = Cat()
c.sound()