#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
class queue
{
    struct node *front, *rear;

public:
    queue()
    {
        front = rear = NULL;
    }
    void enqueue();
    void dequeue();
    void display();
};
void queue ::enqueue()
{
    int val;
    cout << "Insert the element in queue : " << endl;
    cin >> val;
    if (rear == NULL)
    {
        rear = new node;
        rear->next = NULL;
        rear->data = val;
        front = rear;
    }
    else
    {
        node *temp = new node;
        rear->next = temp;
        temp->data = val;
        temp->next = NULL;
        rear = temp;
    }
}
void queue ::display()
{
    if (front == NULL && rear == NULL)
    {
        cout << endl
             << "Queue is Empty...";
    }
    node *temp = front;
    while (temp->next != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << temp->data;
}
void queue::dequeue()
{
    node *temp = front;
    if (front == NULL)
    {
        cout << "Underflow" << endl;
        return;
    }
    else if (temp->next != NULL)
    {
        temp = temp->next;
        cout << "Element deleted from queue is : " << front->data << endl;
        free(front);
        front = temp;
    }
    else
    {
        cout << "Element deleted from queue is : " << front->data << endl;
        free(front);
        front = NULL;
        rear = NULL;
    }
}
int main()
{
    queue q;
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