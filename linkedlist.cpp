#include <iostream>
using namespace std;
// implement linkedlist
class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        // new node create

        this->data = d;
        this->next = NULL;
    }
};
// insertion at node
void insertionAtHead(Node *&head, int d)
{
    // new node creat krungi temp name k jisme d add hoga and node creat hoga and fir will add that node yto head
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void insertionAtTail(Node *&tail, int data)
{
    
    Node *temp = new Node(data);
    // now we will point tail to new node
    tail->next = temp;
    tail = temp;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> "
             << " ";
        temp = temp->next;
    }
    cout << "NULL";
    cout << endl;
}
int main()
{
    /*cout<<"hello world";
    Node n1(19);
    Node n2(20);
    Node n3(21);
    Node n4(22);
    cout<<n1.data<<" ";
    cout<<n1.next<<" ";
    cout<<n2.data<<" ";
    cout<<n2.next<<" ";
    cout<<n3.data<<" ";
    cout<<n3.next<<" ";
    cout<<n4.data<<" ";
    cout<<n4.next<<" ";*/
    Node *N1 = new Node(10);
    
    cout << N1->data << endl;
    cout << N1->next << endl;

    Node *head = N1;
    Node *tail=N1;

    /*insertionAtHead(head, 19);
    insertionAtHead(head, 20);
    insertionAtHead(head, 195);
    insertionAtHead(head, 156);
    insertionAtHead(head, 1909);
    insertionAtHead(head, 16539);
    print(head); */  

    insertionAtTail(tail,20);
    insertionAtTail(tail,234);
    insertionAtTail(tail,2032);
    insertionAtTail(tail,20121);
    insertionAtTail(tail,201212);
    print(head);





    return 0;
}