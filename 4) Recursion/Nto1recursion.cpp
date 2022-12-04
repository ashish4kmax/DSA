#include <iostream>
using namespace std;

void N_to_one(int n) {
    if(n==0) {
        return;
    }
    cout<<n<<" ";
    N_to_one(n-1);
}

int main() {
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    N_to_one(n);
    return 0;
}