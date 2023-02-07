/*#include<iostream> //last occurance wala code 
using namespace std; 
int lastOccurance(int array[],int size,int key){
int start=0;
int end=(size-1);  
int mid=(size/2); int ans;
while (start<=end)
{
if (array[mid]==key)
{ ans=mid; 
  start=mid+1;
} 
else if (array[mid]>key)
{
    end=mid-1 ;//jab last most occurance nikalna hai tab we will go to the left most part of the sorted array 
} 
else{
    start=mid+1 ;
}
mid=(start+end)/2;

} 
return ans;
}
int main(){  
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
     int element;
     cin>>element;

    int index=lastOccurance(arr,n,element);  
    cout<<"the last occurance of the entered number is"<<index<<endl;
    cout<<"fine"<<endl;



    return 0;
}*/ 

#include<iostream> //first occurance nikalana hai tab we will go to the right most part of the array 
using namespace std; 
int firstOccurance(int array[],int size,int key){
int start=0;
int end=(size-1);  
int mid=(size/2); int ans;
while (start<=end)
{
if (array[mid]==key)
{ ans=mid; 
  end=mid-1;
} 
else if (array[mid]>key)
{
    end=mid-1 ;
} 
else{
    start=mid+1 ;
}
mid=(start+end)/2;

} 
return ans;
}
int main(){  
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
     int element;
     cin>>element;

    int index=firstOccurance(arr,n,element);  
    cout<<"the first occurance of the entered number is"<<index<<endl;
    cout<<"fine"<<endl;



    return 0;
}