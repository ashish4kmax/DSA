#include <iostream>
using namespace std;

int insert(int arr[], int n, int pos, int elem) {
    if(pos>=n) {
        return -1;
    }
    else {
        for(int i=n;i>=pos;i--) {
            arr[i]=arr[i-1];
        }
        arr[pos-1]=elem;
        return 0;
    }
}

void display(int arr[], int n, int pos, int elem) {
    printf("The array elements are : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }
    
}

int main() {
    int arr[5], pos, elem, n;
    arr[0]=5;
    arr[1]=7;
    arr[2]=10;
    arr[3]=20;
    n=sizeof(arr)/sizeof(arr[0]);
    printf("Enter the element to be inserted and at what position respectively : ");
    cin>>elem>>pos;
    if(insert(arr,n,pos,elem)) {
        display(arr,n,pos,elem);
    }
    else {
        cout<<insert(arr,n,pos,elem);
    }
    return 0;
}