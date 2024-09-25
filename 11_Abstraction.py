from abc import ABC, abstractmethod

class Shape(ABC):
    @abstractmethod
    def draw(self):
        pass
    
class Triangle (Shape):
    def draw(self):
        print("Drawing a Triangle")
        
        
shp = Triangle()
shp.draw()