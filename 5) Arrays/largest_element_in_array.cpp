#include <iostream>
using namespace std;

int largest(int arr[], int n) {
    int max=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>arr[max]) {
            max=i;
        }
    }
    return max;
}

int main() {
    int arr[] = {40,8,50,100};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<largest(arr,n);
    return 0;
}