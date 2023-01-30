/*#include<iostream> 
using namespace std;
int main(){
    int arr[3]={5,7,11};
    cout<<arr[0];
    cout<<arr[1];
    cout<<arr[2]; 
     return 0;
}*/ 
/*#include<iostream> 
using namespace std;
int main(){ 
    int n=3; int alval=1;
    int arr[n]={1};
    for (int i = 0; i<n; i++)
    {
        arr[i]=alval;
    }
     for (int i = 0; i < n; i++)
     {
        cout<<arr[i];
     }
     
    
    return 0;
}*/ 

#include<iostream> 
using namespace std; 
void printarray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
    cout<<arr[i]<<endl;
    }} 

int main(){  
int n;
n=5;
int arr[n]={1,2,3,4,5};
 
cout<<arr[4]; 
cout<<"the print of the array is as follows"<<printarray(arr,n);

    

    return 0;
}