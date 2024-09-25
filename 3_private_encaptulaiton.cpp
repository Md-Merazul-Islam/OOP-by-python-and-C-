

#include <bits/stdc++.h>
using namespace std;

class Person
{
private:
    string name; // private variable

public:
    void setName(string n)
    {
        name = n;
    }
    string getName()
    {
        return name;
    }
};

int main()
{

    Person p1;
    p1.setName("meraz");
    cout << p1.getName();
  
    return 0;
}