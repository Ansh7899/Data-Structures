#include <iostream>
using namespace std;
#define max 10
class Stack
{
    int a[max];
    int top;

public:
    Stack()
    {
        top = -1;
    }
    void push(int x);
    void pop();
    void peep();
    void display();
};
void Stack::push(int x)
{
    if (top == max - 1)
    {
        cout << "Overflow...";
    }
    else
    {
        top = top + 1;
        a[top] = x;
    }
}
void Stack::pop()
{
    if (top == -1)
    {
        cout << "UnderFlow";
    }
    else
    {
        cout << "\nElement to be popped is:" << a[top];
        top = top - 1;
    }
}
void Stack::peep()
{
    if (top == -1)
    {
        cout << "UnderFlow";
    }
    else
    {
        cout << "\nElement at top of stack is:" << a[top];
    }
}
void Stack::display()
{
    if (top == -1)
    {
        cout << "\nStack is Empty";
    }
    else
    {
        for (int i = top; i > -1; i--)
            cout << a[i] << '\t';
    }
}
int main()
{
    Stack s;
    int choice;
    char ch;
    do
    {
        cout << "Main Menu\n1.Push an Element\n2.Pop the element\n3.Peep the element\n4.Display the Stack\nEnter your choice:";
        cin >> choice;
        switch (choice)
        {
        case 1:
            int temp;
            cout << "\nEnter the element:";
            cin >> temp;
            s.push(temp);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.peep();
            break;
        case 4:
            s.display();
            break;
        default:
            cout << "\nWrong Choice... Enter again";
            break;
        }
        cout << "\nDo you want to continue?";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');
    return 0;
}