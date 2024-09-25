#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Person
{
public:
    string name;
    int age;
    string gmail;
    Person(string name, int age, string gmail)
    {
       this-> name = name,
       this-> age = age,
       this-> gmail = gmail;
    }

    ~Person(){
        cout << "Person destructor called for " << name << endl;
    }
};

int main()
{
    Person me ("Meraz", 200,"merazul@gmail.com");
    cout << "Name: " << me.name << endl;
    cout << "Age: " << me.age << endl;
    cout << "Gmail: " << me.gmail << endl;

    return 0;
}