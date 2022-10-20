#include <iostream>
using namespace std;

int tz(int n) { // Solves stack overflow of very large factorial values and of time complxity of theta(logn)
    int res=0;
    for (int i = 5; i <= n; i=i*5)
    {
        res+=(n/i);
    }
    return res;
}

int main() {
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<tz(n);
    return 0;
}