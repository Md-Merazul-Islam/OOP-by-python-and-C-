class Rakib:
    def display_rakib(self):
        print("Rakib is a student.")
        
class Sakib(Rakib):
    def display_sakib(self):
        print("Sakib is a teacher.")
    
class Subjects(Sakib):
    def display_subject(self):
        print("This is a list of subjects")

sub = Subjects()
sub.display_rakib()
sub.display_sakib()
sub.display_subject()