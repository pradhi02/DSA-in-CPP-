#include<iostream> 
using namespace std;
int  uniqueoccurance(int array[],int size){ 
     
    int count=1; int ans=0;
    for (int i = 0; i < size; i++)
    {
        if (array[i]==array[i+1]) //checking occurance 
        {
            count++;//count will store the number of time element occured
        } 

        else count=1;
 }  
 
ans=(ans^count);  
 return ans;}
int main(){
    int n;
    cin>>n;
    int arr[n];  
    bool unique=uniqueoccurance(arr,n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    } 
    if (unique)
    {
       cout<<"true";
    }
    else{
        cout<<"false";
    }

return 0;
}