#include <iostream>
#include <vector>
using namespace std;

void SOE1(int n) {
    int count=0;
    for(int i=2;i<=n;i++) {     //  Time Complexity :- O(n*sqrt(n)).
        count=0;
        for(int j=2;j<=i;j++) {
            if(i%j==0) {
                count++;
            }
        }
        if(count==1) {
            cout<<i<<" ";
        }
    }
}

void SOE2(int n) {
    vector<bool>isPrime(n+1,true); {
        for(int i=2;i*i<=n;i++) {
            if(isPrime[i]) {
                for(int j=2*i;j<=n;j=j+i) {
                    isPrime[j]=false;
                }
            }
        }

        for(int i=2;i<=n;i++) {
            if(isPrime[i]) {
                cout<<i<<" ";
            }
        }
    }
}

int main() {
    int n;
    cin>>n;
    SOE2(n);
    return 0;
}