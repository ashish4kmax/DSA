#include <iostream>
using namespace std;

int min(int a, int b)
{
    if (a > b)
    {
        return b;
    }
    else
    {
        return a;
    }
}

// Euclids division algorithm
int egcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return egcd(b, a % b);
    }
}

int LCM(int a, int b)
{
    return (a * b) / egcd(a, b);
}

int gcd(int a, int b)
{
    int res = min(a, b);
    while (res > 0)
    {
        if (a % res == 0 && b % res == 0)
        {
            break;
        }
        res--;
    }
    return res;
}

int main()
{
    int a;
    cout << "Enter value of a : ";
    cin >> a;
    int b;
    cout << "Enter value of b : ";
    cin >> b;
    cout <<"LCM of "<<a<<" and "<<b<< " is = "<<LCM(a, b)<<endl;
    cout <<"GCD of "<<a<<" and "<<b<< " is = "<<gcd(a, b)<<endl;
    return 0;
}