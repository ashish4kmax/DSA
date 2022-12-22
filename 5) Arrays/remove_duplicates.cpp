#include <iostream>
using namespace std;

void duplicates_remove(int nums[], int n) {
    int res=1;
        for(int i=1;i<n;i++) {
            if(nums[i]!=nums[res-1]) {
                nums[res]=nums[i];
                res++;
            }
        }
    for (int i = 0; i < n; i++)
    {
        cout<<nums[i]<<endl;
    }
    //cout<<res;
    
}

int main() {
    int arr[]={3,1,3,4,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    duplicates_remove(arr,n);
    return 0;
}