#include <iostream>
using namespace std;

int linear_search(int arr[],int n) {
    int a,target;  
    printf("Enter the element to be searched : ");
    cin>>target;
    for(int i=0;i<n;i++) {
        if(arr[i]==target) {
            a=i;
            break;
        }
    }

    if(a!=0) {
        return a;
    }
    else {
        return -1;
    }
}

int main() {
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<linear_search(arr,n);
    return 0;
}