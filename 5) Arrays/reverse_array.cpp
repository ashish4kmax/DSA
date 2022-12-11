#include <iostream>
using namespace std;

// Time complexity : theta(n)
// Aux. space : theta(1)

void reverse(int arr[], int n) {
    //printf("The elements of the array in reverse order is : ");
    // for(int i=n-1;i>-1;i--) {
    //     printf("%d ",arr[i]);
    // }
    int temp;
    int k=n-1;
    for (int i = 0; i < n/2; i++)
    {
        temp=arr[k];
        arr[k]=arr[i];
        arr[i]=temp;
        k--;
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }   
}

int main() {
    int arr[]={30,7,6,5,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    reverse(arr,n);
    return 0;
}