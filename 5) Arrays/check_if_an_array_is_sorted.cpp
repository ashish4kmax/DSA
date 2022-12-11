#include <iostream>
using namespace std;

bool check_sort(int arr[], int n) {
    int count=0;
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]>arr[i+1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[]={15,12,25};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<check_sort(arr,n);
    return 0;
}
