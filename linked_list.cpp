#include <iostream>
#include <stdlib.h>
using namespace std;

typedef struct List
{
    char data;
    struct List *next;
} Node;

void display(Node *ptr)
{
    if (ptr == NULL)
    {
        cout << "Empty List";
        return;
    }
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}
void addNode(Node *ptr, char Data)
{
    Node *NewNode ;
    NewNode = new Node;

    NewNode->data = Data;
    NewNode->next = NULL;

    if(ptr == 0)
    {
        ptr = NewNode;
    }
    Node *lastNode = ptr;
  
  
    while(lastNode->next != NULL){
        lastNode = lastNode->next;
    }

    lastNode->next = NewNode;
}
int main()
{
    Node *head;
    head = new Node;
    addNode(head,'A');
    addNode(head,'B');
    addNode(head,'C');
    addNode(head,'D');
       
       
    return 0;
}