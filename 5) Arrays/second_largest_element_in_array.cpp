#include <iostream>
using namespace std;

int second_largest(int arr[], int n)
{
    int max_2 = -1, max = 0;
    for (int i = 1 ; i < n; i++)
    {
        if (arr[i] > arr[max])
        {
            max_2=max;
            max = i;
        }
        
        else if(arr[i]!=arr[max]) {
            if(max_2==-1 || arr[i]>arr[max_2]) {
                max_2=i;
            }
        }
    }
    return max_2;
}

int main()
{
    int arr[] = {20, 10, 20, 8, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << second_largest(arr, n);
    return 0;
}