#include <iostream>
#include <cmath>
using namespace std;

long long sumUnderModulo(long long a, long long b)
{
    long long sum = a + b;
    long long power = pow(10, 9) + 7;
    return sum % power;
}

int main()
{
    long long a,b;
    printf("Enter the value of a and b respectively : ");
    cin>>a>>b;
    cout<<sumUnderModulo(a,b);
}