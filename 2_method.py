class Students:
    def __init__(self, name, roll, group):
        self.name = name
        self.roll = roll
        self.group = group
    
    def display_info(self):
        print(f'Name is {self.name} \nRoll is : {self.roll} \nGroup is : {self.group} \n')
        
    def update_info(self, name, roll, group):
        self.name = name
        self.roll = roll
        self.group = group
        

std = Students('Meraz',6546,'A')
std.display_info()

std.update_info('rakib',232,'B')
std.display_info()