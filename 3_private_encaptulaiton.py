class Person:
    def __init__(self,name):
        self.__name = name
        
    def get_name(self):
        return self.__name 
    
    
person = Person("Meraz")
print(person.get_name() if person.get_name() else "This name is private")