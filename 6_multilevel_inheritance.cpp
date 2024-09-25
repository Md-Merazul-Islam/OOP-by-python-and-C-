

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Animal {
    public:
    void move(){
        cout << "Animal is moving." << endl;
    }
};
class Dog : public Animal {
    public:
    void bark(){
        cout << "The dog are very cute" << endl;
    }
};
class Cat: public Dog{
    public:
    void meow(){
        cout << "The cat meows loudly" << endl;
    }
};
int main()
{
    
    Cat myCat;
    myCat.move();
    myCat.bark();
    myCat.meow();


    return 0;
}