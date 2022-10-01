// Time Complexity is = theta(N) where N = No. of Digits.
#include <iostream>
using namespace std;

int Method_1(int num)
{
    int count = 0;
    while (num > 0)
    {
        num /= 10;
        count++;
    }
    return count;
}

int Method_2(string s)
{
    int count = s.length();
    return count;
}

int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d", &x);
    printf("No. of digits in the inputted number is = %d", Method_1(x));

    /*
    Easy Method :-

    string val;
    printf("Enter a number : ");
    cin>>val;
    cout<<Method_2(val);
    return 0;
    */
}
