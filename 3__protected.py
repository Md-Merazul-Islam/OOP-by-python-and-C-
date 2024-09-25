class Person:
    def __init__(self,name):
        self._name = name
        
    def get_name(self):
        return self._name 
    
    
person = Person("Meraz")
print(person.get_name() if person.get_name() else "This name is protect")


print(person._name) #here also wil be a output
