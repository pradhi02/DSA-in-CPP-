/*#include<iostream>
using namespace std;
int main(){ 
    int n; 
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    } 
    int key;
    cin>>key; 
    for (int i = 0; i < n; i++)
    {
    
     if (key==arr[i])
    {
        cout<<i; 

    } 
     
    else{
        cout<<"not present"<<endl;
    }
    }
return 0;
}*/ 

/*#include<iostream>
using namespace std; 
int search(int arr[],int size , int key){
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==key)
        {  
             
            return i;
        }
     
    }  
    return 0;
    
}
int main(){
 int n;
 cin>>n;
 int array[n];  
 for (int i = 0; i < n; i++)
 {
    cin>>array[i];
 } 
 int element;
 cout<<"enter the element u want to search";
 cin>>element; 
 cout<<"the entered element is present at"<<search(array,n,element)<<endl;
 


    return 0;
    
}*/ 

#include<iostream>
using namespace std; 
void reverse(int array[],int n){
    int start=0;
    int end=(n-1); 
    while (start<=end)
    {
        swap(array[start],array[end]);
        start++;
        end--;
    }
} 
void printarray (int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]; 

    } 
    cout<<endl;
    
}
int main(){ 
    int a [5]={5,8,9,3,-2};
    int b [4]={1,2,3,4};
    reverse(a,5);
    reverse(b,4);
    printarray(a,5);
    printarray(b,4);

    return 0;
}