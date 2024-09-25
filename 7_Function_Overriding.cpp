

#include <bits/stdc++.h>
using namespace std;

class Vehicle
{
public:
    virtual void display() { cout << "This is a vehicle\n"; }
};

class Car : public Vehicle{
    public:
    void display() { cout << "This is a car\n"; }
};

class Bike : public Vehicle{public:
    void display() { cout << "This is a bike\n"; }
};


int
main()
{
    Vehicle * v = new Vehicle;
    v->display();
    
    Car *c = new Car;
    c->display();

    Bike *b=new Bike;
    b->display();
    

    delete v;
    delete c;
    delete b;
    
    return 0;
}