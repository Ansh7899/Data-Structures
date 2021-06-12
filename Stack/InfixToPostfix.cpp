#include <iostream>
using namespace std;
int prec(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}
int main()
{
    stack<char> s;
    string infix, postfix;
    cout << "\nEnter the infix expression: ";
    gets(infix);
    int n = infix.length();
    for (int i = 0; i < n; i++)
        ;
    {
        if (s.empty())
        {
            s.push(s[i]);
        }
        if ()
    }
}