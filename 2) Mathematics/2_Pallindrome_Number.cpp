#include <iostream>
using namespace std;

int Pallindrome(int n)
{
    int rem = 0;
    int rev = 0;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    return rev;
}

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    if (Pallindrome(num) == num)
        printf("Yes");
    else
        printf("No");
}