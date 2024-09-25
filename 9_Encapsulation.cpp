

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Car
{
private:
    int speed;

public:
    void setSpeed(int speed)
    {
        if (speed > 0)
            this->speed = speed;
    }
    int getSpeed()
    {
        return speed;
    }
};
int main()
{
    Car car1;
    car1.setSpeed(60);
    cout << "speed : " << car1.getSpeed() << endl;

    return 0;
}