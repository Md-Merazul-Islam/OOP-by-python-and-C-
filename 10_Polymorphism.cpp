

#include <bits/stdc++.h>
using namespace std;

class Animal{
    public:
    virtual void sound(){
        cout<<"Animal sound started"<<endl;
    }

};

class Dog : public Animal{
    public:
    void sound(){
        cout<<"Dog barks"<<endl;
    }
};


int main()
{

    Animal* animal = new Animal;
    Dog* dog = new Dog;


    // animal->sound();
    // dog->sound();

    Dog dog2;
    Animal * an2;

    an2 = &dog2;
    an2->sound();
    
    return 0;
}