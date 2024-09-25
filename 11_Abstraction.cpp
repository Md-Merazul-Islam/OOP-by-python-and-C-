

#include <bits/stdc++.h>
using namespace std;

class Shape{

public:
    virtual void draw() = 0;
};

class Circle : public Shape{
    public:
    void draw(){
        cout << "Drawing Circle" << endl;
    }
};
int main()
{
    Shape * shp = new Circle();
    shp->draw();
    delete shp;
    
    return 0;
}