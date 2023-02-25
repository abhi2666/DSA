#include <iostream>
#include <vector>
using namespace std;

class node
{
    public:
    int data;
    node * next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void print_list(node* root)
{
    while(root)
    {
        cout<<root->data<<" ";
        root = root->next;
    }
}

int get_count(node* root)
{
    int c = 0;
    while(root)
    {
        c++;
        root = root->next;
    }
    return c;
}

void remove_node(node* root, int n)
{
    int count = get_count(root);
    int len = (count - n) - 1;
    while(len--)
    {
        root = root->next;
    }
    // remove the node from the list
    root->next = root->next->next;
}
int main()
{
    node* root = new node(1);
    node* first = new node(2);
    root -> next = first;
    node* second = new node(3);
    first->next = second;
    node* third = new node(4);
    second->next = third;

    int n = 4;
    remove_node(root, n);
    print_list(root);

 return 0;
}