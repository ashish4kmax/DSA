#include <iostream>
using namespace std;

int fact(int n,int k) {
    if(n==0 || n==1) {
        return k;
    }
    return fact(n-1,k*n);
}

int fib(int n) {
    // if(n==0) {
    //     return 0;
    // }
    // else if(n==1) {
    //     return 1;
    // }
    if(n<=1) {
        return n;
    }
    else {
        return fib(n-1)+fib(n-2);
    }
}

int main() {
    // int n;
    // printf("Enter a number : ");
    // scanf("%d",&n);
    // printf("Factorial of %d is = %d",n,fact(n,1));
    int n;
    printf("Enter the fibonacci number till you want : ");
    scanf("%d",&n);
    printf("Last term till fib is = %d",fib(n));
    return 0;
}