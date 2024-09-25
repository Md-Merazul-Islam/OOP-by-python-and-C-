'''
Class : A class is a blueprint for creating objects (instances). It defines a structure that can include properties (attributes) and methods (functions) that operate on the data.


Question : 
1. What is class in OOP?
2. How does a class deffer from an object?
3. Can you explain how contractors work in python and C++?
4. What is the difference between class methods and instance methods?

'''


class Person:
    def __init__(self, name, age, email):
        self.name = name
        self.age = age
        self.email = email
        
    def __del__(self):
        print ('finished processing')


obj = Person('Md Merazul Islam', '20', 'mdmerazul@75gmail.com')

print('My Name is :', obj.name, '\n' + 'I am ', obj.age,
      'years old. \n' + 'My email is :', obj.email)
