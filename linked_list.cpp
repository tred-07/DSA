#include <bits/stdc++.h>
#define nl "\n"
#define blk " "
using namespace std;
int sz=0;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insertHead(Node *&head,int val){
    Node *newNode=new Node(val);
    newNode->next=head;
    head=newNode;
}
void insertTail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = head;
        cout << "New node add successfully." << nl;
        sz++;
        return;
    }
    tail->next = newNode;
    tail = newNode;
    sz++;
    cout << "New node add successfully." << nl;
}
void printSLL(Node *head)
{
    Node *tmp = head;
    if (head == NULL)
    {
        cout << "Empty list" << nl;
        return;
    }
    while (tmp != NULL)
    {
        cout << tmp->val << blk;
        tmp = tmp->next;
    }
}
int main()
{
    Node *head = NULL, *tail = NULL;
    int op;
    while (1)
    {
        cout << "1 for insert head\n2 for insert tail\n3 for delete head\n4 for delete tail\n5 for print linked list\n0 for exit.";
        cout << nl << "Option:";
        cin >> op;
        if (op == 0)
            break;
        else if (op == 1)
        {
            cout << "Value:";
            int val;
            cin >> val;
            if(!sz)insertTail(head, tail, val);
            else insertHead(head,val);
        }
        else if (op == 2)
        {
            cout << "Value:";
            int val;
            cin >> val;
            insertTail(head, tail, val);
        }
        else if (op == 3)
        {
            cout << "Delete head" << nl;
        }
        else if (op == 4)
        {
            cout << "Delete tail successfully";
        }
        else if (op == 5)
        {
            cout << "Linked List:";
            printSLL(head);
            cout << nl;
        }
    }
}

/*


*/