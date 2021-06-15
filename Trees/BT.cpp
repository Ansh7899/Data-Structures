#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *left, *right;
};
struct node *create()
{
    int temp;
    struct node *newnode = new node;
    cout << "\nEnter Data(-1 for no node): ";
    cin >> temp;
    if (temp == -1)
    {
        return NULL;
    }
    newnode->data = temp;
    cout << "\nEnter left child of " << temp << " : ";
    newnode->left = create();
    cout << "\nEnter right child of " << temp << " : ";
    newnode->right = create();
    return newnode;
}
int main()
{
    struct node *root;
    root = NULL;
    root = create();
}