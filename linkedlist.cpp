#include<iostream>
using namespace std; 
//implement linkedlist 
class Node{ 
     public:
    int data;  
    Node* next; 

    Node(int d){ 
        //new node create 
        
        this->data=d;
        this->next=NULL;
    }  
    //insertion at node 
   void insertionAtHead(Node* &head, int d){
    //new node creat krungi temp name k jisme d add hoga and node creat hoga and fir will add that node yto head 
    Node *temp=new Node(d);  
    temp->next=head;
    head=temp;

   } 

      

};
int main(){ 
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




    return 0;
}