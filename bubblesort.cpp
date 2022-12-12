#include<iostream> 
using namespace std; 
int main(){
int n; 
cin>>n; 
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i]; //array input 
}
int counter=1; 
while(counter<n){ //counter has to be one less than n

for (int i = 0; i <n-counter /* 1st ireration me  n-1 times hoga , second me n-2 times */; i++)
{
    if (arr[i]>arr[i+1]) //checking the condition left num has to be smaller than right num , if not swap 
    {
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    
}
counter++;

}
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}






    return 0; 
} 