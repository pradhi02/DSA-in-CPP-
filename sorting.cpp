/*#include<iostream> 
#include<climits>
using namespace std;
int main(){
    int n; 
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    } 
     int minnum=INT_MAX;
     for (int i = 0; i < n; i++)
     {
        minnum=min(minnum,arr[i]);
     }
     cout<<minnum;
    
    return 0;
}*/   
#include<iostream> 
using namespace std; 
int main(){
 int n; int temp;
 cin>>n; 
 int arr[n];
 for (int i = 0; i < n; i++)
 {
    cin>>arr[i];
 } 
 for (int i = 0; i < n; i++)
 {
    for (int j = i+1; j < n; j++)
    {
        if (arr[j]<arr[i])
        {
        
        temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
        }
        
    }
 
 }
 for (int i = 0; i < n; i++)
 {
    cout<<arr[i]<<endl;
 }
 
 
 




    return 0;
}
