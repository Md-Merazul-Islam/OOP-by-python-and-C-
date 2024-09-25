

#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Calculator
{
public:
    int sum(int i, int j, int c)
    {
        return i + j + c;
    }

    int sum(int i, int j)
    {
        return i + j;
    }

    int sum(double a, double b)
    {
        return a + b;
    }
};

int main()
{
    Calculator cal;
    cout << cal.sum(5, 10, 15) << endl;
    cout << cal.sum(5, 18)<<endl;
    cout << cal.sum(232.34, 43.4)<<endl;

    return 0;
}