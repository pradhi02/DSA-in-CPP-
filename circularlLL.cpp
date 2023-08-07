#include<iostream>
using namespace std; 
class Node{
    public:
    int data;
    Node* next;  

    //constructor 
    Node(int d){
        this->data=d; 
        this->next=NULL;
    }

} ;

//insertion at circuar linked list 
insertNode(Node* &tail, int element , int d){ 

//first case is linked list is already EMPTY 
if(tail==NULL){
    Node* newNode= new Node(d);
    tail=newNode;
    newNode->next=newNode;
} 

//while linked list is not empty; 
else { 
    Node* curr=tail;
    
    while(curr->data!=element){
        curr=curr->next; 
     }  

     Node* temp= new Node(d);
     temp->next=curr->next;
     curr->next=temp;


}


}  


//Now we will write the print function 

void Print(Node* tail){
    Node* temp=tail;
    do
    {
        cout<<temp->data<<" "; 
        temp=temp->next;
        

    } while (temp!=tail); 
    cout<<endl;
    
}  


//now lets look into deleteNode




void deleteNode(Node* tail, int value){
    //if linked list is empty 
    if(tail==NULL){
        cout<<"linked list is already empty";
        return;
    }

    //when linked list has elements to be deleted
    else{  
   Node* prev=tail;
   Node* curr = prev->next;
   while(curr->data!=value){ 
    prev=curr;
    curr=curr->next;
    
   }  
   prev->next=curr->next;
   curr->next=NULL;
   delete curr;

    }
}

int main(){  
Node* tail=NULL;
insertNode(tail,2,3);
Print(tail);
insertNode(tail,3,7);
Print(tail);
insertNode(tail,7,9);
Print(tail);
insertNode(tail,7,45);
Print(tail);
deleteNode(tail,7);
Print(tail);
deleteNode(tail,45);


    return 0;
}