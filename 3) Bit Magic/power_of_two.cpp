#include <iostream>
#include <cmath>
using namespace std;

bool power_of_two1(int n) {
    if(n==0) {
        return 0;
    }
    return ((n&(n-1))==0);
}

// using bit theory and left shift operator.
bool power_of_two2(int n) {
    int i=1,c=1;
    while(c<n) {
        c=1<<i;
        i++;
    }
    if(n==c) {
        return true;
    }
    else {
        return false;
    }
} 

// using constant n operations 


int main() {
    int n,flag=0;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<power_of_two1(n);
    return 0;
}