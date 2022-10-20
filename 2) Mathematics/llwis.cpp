#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

void lengthOfLastWord(string s)
{
    int length=s.size();
    char k[10000];
    for (int i = 0; i < s.length(); i++)
    {
        // if (isspace(s.at(i)))
        // {
        //     continue;
        // }
        // else
        // {
            k[i] = s.at(i);
            printf("%c",k[i]);
        //}
    }
}

int main()
{
    string s;
    cout<<"Enter a sentence : ";
    cin>>s;
    lengthOfLastWord(s);
    return 0;
}