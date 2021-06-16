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
void preorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << "\t";
    preorder(root->left);
    preorder(root->right);
}
void inorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << "\t";
    inorder(root->right);
}
void postorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << "\t";
}
int main()
{
    struct node *root;
    root = NULL;
    root = create();
    cout << "\nPreOrder Traversal of the tree is: ";
    preorder(root);
    cout << "\nInOrder Traversal of the tree is: ";
    inorder(root);
    cout << "\nPostOrder Traversal of the tree is: ";
    postorder(root);
}