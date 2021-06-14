#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
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
    newnode->next = NULL;
    if (head == NULL)
    {
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
void LinkedList::del()
{
    if (head == NULL)
    {
        cout << "\nEmpty List";
    }
    else
    {
        node *temp = head, *prev;
        int ind;
        cout << "\nEnter the index of the node you want to delete: ";
        cin >> ind;
        if (ind < 1)
        {
            cout << "\n Enter valid Index";
        }
        else if (ind == 1)
        {
            head = temp->next;
            delete (temp);
        }
        else
        {
            for (int i = 0; i < ind - 1; i++)
            {
                prev = temp;
                temp = temp->next;
            }
            prev->next = temp->next;
            delete (temp);
        }
    }
}
void LinkedList::display()
{
    if (head == NULL)
    {
        cout << "\nEmpty List";
    }
    else
    {
        node *temp;
        temp = head;
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