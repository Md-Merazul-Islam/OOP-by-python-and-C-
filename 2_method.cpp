

#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Student
{
public:
    string name;
    int roll;
    string group;
    Student(string name, int roll, string group)
    {
        this->name = name;
        this->roll = roll;
        this->group = group;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Group: " << group << endl;
    }
};
int main()
{
    Student stds("meraz", 232, "A");

    stds.display();

    return 0;
}