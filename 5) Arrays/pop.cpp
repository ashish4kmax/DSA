#include <iostream>
using namespace std;

int pop(int arr[], int *n, int elem) {
    int pos=0;
    for(int i=0;i<*n;i++) {
        if(elem==arr[i]) {
            pos=i;
        }
    }

    if(pos==0) {
        return -1;
    }
    
    else {
        for(int i=pos;i<*n-1;i++) {
            arr[i]=arr[i+1];
        }
        *n=*n-1;
        return 0;
    }
}

void display(int arr[], int *n) {
    printf("The array elements after deleting an element is : \n");
    for (int i = 0; i < *n; i++)
    {
        printf("%d\n",arr[i]);
    }
}

int main() {
    int arr[]={3,8,12,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int elem;
    printf("Enter the element you want to delete : ");
    cin>>elem;
    if(pop(arr,&n,elem)==-1) {
        printf("Element not found in the list so cannot be deleted !! \n");
    }
    else {
        display(arr,&n);
    }
    return 0;
}