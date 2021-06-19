#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next, *prev;
};
class LinkedList
{
    node *head;

public:
    LinkedList()
    {
        head = NULL;
    }
    void insert();
    void del();
    void display();
};
void LinkedList ::insert()
{
    node *newnode = new node();
    cout << "\nEnter data: ";
    cin >> newnode->data;
    if (head == NULL)
    {
        newnode->next = NULL;
        newnode->prev = NULL;
        head = newnode;
    }
    else
    {
        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}
int main()
{
    LinkedList list;
    int choice;
    char ch;
    do
    {
        cout << "Main Menu\n1.Insert an Element\n2.Delete an element\n3.Display the list\nEnter your choice:";
        cin >> choice;
        switch (choice)
        {
        case 1:
            list.insert();
            break;
        case 2:
            list.del();
            break;
        case 3:
            list.display();
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