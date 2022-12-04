#include <iostream>
using namespace std;

void one_to_N(int n,int x) {
    if(n==0) {
        return;
    }
    cout<<x<<" ";
    one_to_N(n-1,x+1);
}

int main() {
    int n,x=1;
    cout<<"Enter a number : ";
    cin>>n;
    one_to_N(n,x);
    return 0;
}