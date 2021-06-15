#include <iostream>
using namespace std;
#define max 10
class circQueue
{
    int front, rear, a[max];

public:
    circQueue()
    {
        front = rear = -1;
    }
    void enqueue();
    void dequeue();
    void peek();
    void display();
    void contains();
};
void circQueue ::enqueue()
{
    int temp;
    cout << "\nEnter Data: ";
    cin >> temp;
    if (rear == -1 && front == 0)
    {
        cout << "\nOverflow..";
    }
    else if (rear == -1 && front == -1)
    {
        front = rear = 0;
    }
    else if (rear == max - 1 && front != 0)
    {
        rear = 0;
    }
    else
        rear += 1;
    a[rear] = temp;
}
void circQueue ::dequeue()
{
    if (front == -1 && rear == -1)
    {
        cout << "\nEmpty Queue";
    }
    int temp = a[front];
    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        if (front == max - 1)
            front = 0;
        else
            front += 1;
    }
    cout << "\nDequeued Element: " << temp;
}
void circQueue ::display()
{
    if (front == -1 && rear == -1)
    {
        cout << "\nEmpty Queue";
    }
    else
    {
        if (front < rear)
        {
            for (int i = front; i <= rear; i++)
            {
                cout << a[i] << "\t";
            }
        }
        else
        {
            for (int i = front; i < max; i++)
            {
                cout << a[i] << '\t';
            }
            for (int i = 0; i <= rear; i++)
            {
                cout << a[i] << "\t";
            }
        }
    }
}
int main()
{
    circQueue q;
    int choice;
    char ch;
    do
    {
        cout << "Main Menu\n1.Enqueue an Element\n2.Dequeue the element\n3.Display the Queue\nEnter your choice:";
        cin >> choice;
        switch (choice)
        {
        case 1:
            q.enqueue();
            break;
        case 2:
            q.dequeue();
            break;
        case 3:
            q.display();
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