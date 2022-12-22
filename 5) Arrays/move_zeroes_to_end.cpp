#include <bits/stdc++.h>
using namespace std;

void move_zeroes_to_end(int arr[],int n) {
    int count=0;
    for(int i=0;i<n;i++) {
        if(arr[i]!=0) {
            swap(arr[i],arr[count]);
            count++;
        }
    } 

    for(int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
}

int main() {
    int arr[]={0,1,0,3,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    move_zeroes_to_end(arr,n);
    return 0;
}