

#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Bird {
    public:
    void fly(){
        cout << "Birds can fly" << endl;
    }
};
      
    
    
class Eagle{
    public:
    void eat(){
        cout << "Eagle can eat" << endl;
    }
};
  

class Penguin :public Bird, public Eagle {};

int main()
{
    Penguin p;
    p.fly();
    p.eat();
    
    return 0;
}