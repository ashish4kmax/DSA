#include <iostream>
#include <cmath>
using namespace std;

int power(int x,int n) {   // Time Complexity = theta(n)
    int val=1;
    for (int i = 0; i < n; i++)
    {
        val*=x;
    }
    return val;
}

// theta(logn) should be the new tiem complexity.
int powers(int x,int n) {
    if(n==0) {
        return 1;
    }
    int temp=powers(x,n/2);
    temp=temp*temp;
    if(n%2==0) {
        return temp;
    }
    else {
        return temp*x;
    }
}

int main() {
    int x,n;
    cout<<"Enter a number : ";
    cin>>x;
    cout<<"Enter the power of a number : ";
    cin>>n;
    cout<<powers(x,n);
    return 0;
}