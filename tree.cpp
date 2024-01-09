#include <iostream>
using namespace std;

class node
{
    node *root;
    node *lchild;
    node *rchild;

    int data;

public:
    node(int rvalue)
    {
        root = new node;
        root->data = rvalue;
        root->lchild = NULL;
        root->rchild = NULL;
    }
};
int main()
{

    return 0;
}