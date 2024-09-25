

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Animal{
    public:
    string name;
    Animal(string name){
        this->name = name;
    }
    void speak(){
        cout << "Woof!" << endl;
    }
};

class Dog : public Animal{
    public:
    Dog (string name):Animal(name){}
    void speak(){
        cout << "Geo, Geo!" << endl;
    }
};
int main()
{
    
    Dog myDog("Tom");
    myDog.speak();
    
    Animal myAnimal("Shiva");
    myAnimal.speak();

    return 0;
}