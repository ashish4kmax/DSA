#include <iostream>
using namespace std;

// int odd_occuring1(int n) {  // naive solution with time complexity of O(n^2);
//     int arr[n];
//     printf("Enter the array elements : ");
//     for(int i=0;i<n;i++) {
//         cin>>arr[i];
//     }
//     int count,a;
//     for (int i = 0; i < n; i++)
//     {
//         count=0;
//         for (int j = 0; j < n; j++)
//         {
//             if(arr[i]==arr[j]) {
//                 count++;
//             }
//         }
//         if(count%2!=0) {
//             return arr[i];
//         }
//     }
// }

int findOdd(int arr[], int n)   // Time complexity is theta(n).
{
    int res = 0;
    
    for(int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
    }
    
    return res;
}

int main() {
    //int n;
    //cout<<"Enter the size of the array : ";
    //cin>>n;
    int arr[]= {4, 3, 4, 4, 4, 5, 5, 3, 3}, n = 9;
	
    cout<<findOdd(arr, n);
    return 0;
}