#include<iostream>
using namespace std; 
void insertionsort(int array[],int size){
  for (int i = 1; i <size; i++)
  {  int j; 
   int temp=array[i];
   for (int j = i-1; j>=0; j--)  
   {
      if (array[j]>temp)
      {
         array[j+1]=array[j];
      } 
      else{
        break;
      }  
      
   }  
   array[j+1]=temp;
   } 
  
}
int main(){ 
  int n;
  cin>>n;
  int arr[n];
  for (int i = 0; i<n; i++)
  {
  cin>>arr[i];
  }  
 insertionsort(arr,n);
  for (int i = 0; i < n; i++)
  {
     cout<<arr[i];
  }
  

  
  
  return 0;
}