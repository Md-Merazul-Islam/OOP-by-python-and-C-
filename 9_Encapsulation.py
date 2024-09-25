class Car :
    
    def __init__(self):
        self.__speed =0
        
    def set_speed(self, speed):
        if speed > 0 and speed < 200:
            self.__speed = speed
        else:
            print("Invalid speed")
        
        
    def get_speed(self):
        return self.__speed
    
car1=Car()
car1.set_speed(20)
print(car1.get_speed())
        