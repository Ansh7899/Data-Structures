#include <iostream>
using namespace std;
#define max 10
class queue
{
    int front, rear, a[max];

public:
    queue()
    {
        front = rear = -1;
    }
    void enqueue();
    void dequeue();
    void peek();
    void display();
    void contains();
};
void queue ::enqueue()
{
    int temp;
    cout << "\nEnter data: ";
    cin >> temp;
    if (rear == max - 1)
    {
        cout << "\nOverflow..";
    }
    if (front == -1 && rear == -1)
    {
        front = rear = 0;
    }
    else
    {
        rear = rear + 1;
    }
    a[rear] = temp;
}
void queue ::dequeue()
{
    if (front == -1 || front > rear)
    {
        cout << "\nUnderflow..";
    }
    else
    {
        cout << "\nDequeued Value: " << a[front];
        front += 1;
        if (front > rear)
            front = rear = -1;
    }
}
void queue ::peek()
{
    if (front == -1 || front > rear)
    {
        cout << "\nUnderflow..";
    }
    else
    {
        cout << "\nElement at front is: " << a[front];
    }
}
void queue ::display()
{
    if (front == -1 || front > rear)
    {
        cout << "\nUnderflow..";
    }
    else
    {
        for (int i = front; i <= rear; i++)
            cout << a[i] << "\t";
    }
}
int main()
{
    queue q;
    int choice;
    char ch;
    do
    {
        cout << "Main Menu\n1.Enqueue an Element\n2.Dequeue the element\n3.Peek the element\n4.Display the Queue\nEnter your choice:";
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
            q.peek();
            break;
        case 4:
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