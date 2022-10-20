#include <iostream>
using namespace std;

int absolute(int I) {
    if(I>0) {
        return I;
    }
    else {
        return -I;
    }
}

int main() {
    int I;
    cout<<"Enter a number : ";
    cin>>I;
    cout<<"Absolute value of the number = "<<absolute(I)<<endl;
    return 0;
}