#include <iostream>
using namespace std;
int main()
{
    string s = "12111234";
    int i = 0;
    for (i = 0; i < s.length(); i++)
    {
        if ((int)s[i] < 48 || (int)s[i] > 57)
        {
            break;
        }
    }
    if (i == s.length())
        cout << "String contains only numbers";
    else
        cout << "String doesn't contains only numbers";
}