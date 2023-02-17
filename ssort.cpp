#include<iostream>
using namespace std; 
void selectionsort(int array[],int size){ 
  
    for (int i = 0; i < size; i++)
    {   int minindex=i;
        for (int j = i+1; j< size; j++)
        {
            if (array[j]<array[minindex])
            {
            minindex=j;
            } 
           
            
        } 
         swap(array[minindex],array[i]);   
    }
    
}
int main(){ 
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }  
    selectionsort(arr,n);

    for (int i = 0; i < n; i++)
    {
     cout<<arr[i]<<endl;
    } 
    
    
    
}   