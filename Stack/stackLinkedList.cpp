#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
class Stack
{
    node *top;

public:
    Stack()
    {
        top = NULL;
    }
    void push(int);
    void pop();
    void peep();
    void display();
};
void Stack ::push(int d)
{
    node *temp;
    temp = new node();
    temp->data = d;
    if (top == NULL)
    {
        temp->next = NULL;
    }
    else
    {
        temp->next = top;
    }
    top = temp;
}
void Stack ::pop()
{
    if (top == NULL)
    {
        cout << "\nUnderFlow ... Stack is Empty!";
    }
    else
    {
        node *temp = top;
        top = top->next;
        cout << "\nElement to be popped is: " << temp->data;
        delete (temp);
    }
}
void Stack ::peep()
{
    if (top == NULL)
    {
        cout << "\nEmpty Stack";
    }
    else
    {
        cout << "\nElement at top is: " << top->data;
    }
}
void Stack ::display()
{

    if (top == NULL)
    {
        cout << "\nEMPTY STACK..";
    }
    else
    {
        node *temp = top;
        cout << endl;
        while (temp->next != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << temp->data;
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