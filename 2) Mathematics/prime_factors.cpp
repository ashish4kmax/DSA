// Example prime factor of 12 is 2,2,3
#include <iostream>
using namespace std;

void prime_factors(int n) {
    for(int i=2;i<=n;i++) { //Time complexity theta(n)
        if(n%i==0) {
            n=n/i;
            cout<<i<<" ";
            i-=1;
        }
    }
}

int main() {
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    prime_factors(n);
    return 0;
}