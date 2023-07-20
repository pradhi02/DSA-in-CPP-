#include<iostream>
using namespace std; 
//implement linkedlist 
class Node{ 
     public:
    int data;  
    Node* next; 
    
     

};
int main(){
     cout<<"hello world"; 
     Node L1;  
     Node* node1= new Node();
     cout<<L1.data<<endl;
     cout<<node1->data<<endl;
     cout<<node1->next<<endl;
     cout<<L1.next;
    return 0;
}