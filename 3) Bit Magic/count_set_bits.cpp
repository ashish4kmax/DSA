#include <iostream>
using namespace std;

int table[256];
	
// recursive function to count set bits 
void initialize() { 

// To initially generate the table algorithmically:
    table[0] = 0;
    for (int i = 0; i < 256; i++)
    {
        table[i] = (i & 1) + table[i / 2];
    }
} 
	
int countSetBits(int n) {
	return table[n & 0xff] + 
    table[(n >> 8) & 0xff] + 
    table[(n >> 16) & 0xff] + 
    table[n >> 24]; 
}

// naive solution for time complexity of O(n) and in best case O(1).
int count_set_bits1(int n)
{
    int count = 0;
    if (n == 1)
    {
        count=1;
    }
    else
    {
        while (n != 0)
        {
            if (n & 1 != 0)
            {
                count++;
            }
            n /= 2;
        }
    }
    return count;
}

// Brian and Kerningham Algorithm
// Effiecent soltuion with time complexity = theta(count_set_bit).
unsigned int count_set_bits2(int n) {    
    unsigned int res=0;
    while(n>0) {
        n = n & (n-1);
        res+=1;
    }
    return res;
}



int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    cout << count_set_bits2(n);
    return 0;
}