class Animal :
    def __init__(self, name):
        self.name = name 
        
    def speak(self):
        print(f'{self.name} are making sound.\n')
        
    
class Dog(Animal):
    def speak(self):
        print(f'{self.name} are geo geo.\n')
        
        
        
dog = Dog('Kutta')
dog.speak()