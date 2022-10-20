#include <iostream>
using namespace std;

// Best Approach iterative one  Time Complexity :- theta(n)
int fact1(int n) {
    int fact=1;
    for (int i = 1; i <= n; i++)
    {
        fact*=i;
    }
    return fact;
}

/*
//Recursive approach    Time Complexity :- theta(n)
int fact2(int n) {
    if(n<=0) {
        return 1;
    }
    else {
        return n*fact2(n-1);
    }
}
*/

int main() {
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<fact1(n);
    return 0;
}