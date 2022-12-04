#include <iostream>
using namespace std;

int main() {
    int n=123;
    int res=0;
    int rem=0;
    while(n!=0) {
        rem=n%10;
        res=res*10+rem;
        n/=10;
    }
    cout<<res;
}