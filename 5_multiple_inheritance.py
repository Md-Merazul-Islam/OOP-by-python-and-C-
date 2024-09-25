class Bird :
    def fly(self):
        print("Birds can fly")
    
    
class Eagle:
    def eat(self):
        print("Eagles eat fish")

class Penguin(Bird, Eagle):
    pass

p = Penguin()
p.fly()
p.eat()