
# Runtime Polymorphism -> Dynamic Binding | Overriding | Late Binding

# CompileTime Polymorphism-> Static Binding | Overloading | Early Binding


class Vehicle:
    def string_engine(self):
        print("Staring Vehicle")

class Car (Vehicle):
    def string_engine(self):
        print("Staring Car Engine")

class Bike (Vehicle):
    def string_engine(self):
        print("Staring Bike Engine")


car = Car()

car.string_engine() # Output: Starting Car Engine

bike = Bike()

bike.string_engine() # Output: Starting Bike Engine

vehicle = Vehicle()

vehicle.string_engine() # Output: Starting Vehicle