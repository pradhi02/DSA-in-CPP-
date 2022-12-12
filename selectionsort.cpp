
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
for (int i = 0; i < n; i++) //number of passess required which means total number of passes is n-1 
{
    for (int j = i+1; j <n; j++) //yha i+1 isliye le rhai hai kyuki hum check kaare hai , [0] index k baad wale number se compare krnege  


        {  if (arr[j]<arr[i])
          {
             temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
          
    }
    
}
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}




    return 0;
}    

