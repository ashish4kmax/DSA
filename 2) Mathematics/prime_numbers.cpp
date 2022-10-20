#include <iostream>
using namespace std;

bool prime(int n)
{
    if (n == 1)
    {
        return false;
    }
    else
    {
        int flag = 0;
        for (int i = n - 1; i > 1; i--)
        {
            if (n % i == 0)
            {
                flag++;
                break;
            }
        }
        if (flag == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

// Make a program in which the time complexity is sqrt(n)

bool isprime(int n) {
    
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    cout << prime(n);
    return 0;
}