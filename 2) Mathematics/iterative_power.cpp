#include <iostream>
#include <cmath>
using namespace std;

int iterative_power(int x,int n) {
    int value=1;
    while(n>0) {
        if(n%2!=0) {
            value*=x;
        }
        x*=x;
        n/=2;
    }
    return value;
}

int main() {
    int x,n;
    cout<<"Enter the value of x : ";
    cin>>x;
    cout<<"Enter the power of n : ";
    cin>>n;
    cout<<iterative_power(x,n);
    return 0;
}