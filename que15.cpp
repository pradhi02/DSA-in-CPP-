 /*#include<iostream>
 using namespace std; 
 int main(){

int array[4] = {10,20,30,40};

cout<<array[0]<<endl;
cout<<array[1]<<endl;
cout<<array[2]<<endl;
cout<<array[3]<<endl;
    return 0; 
 } */ 

/*#include<iostream> 
 using namespace std; 
 int main(){  
    int n;
cin>>n; 
int array[n];

for (int i = 0; i < n; i++)
{
    cin>>array[i];
} 
for (int i = 0; i < n; i++)
{
    cout<<array[i]<<" ";

}
 return 0; 
 } */  

 //find max and min of the following arrays
 /*#include<iostream> 
 #include<climits>
 using namespace std; 
 int main(){  
    int n; 
    cin>>n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    } 
    int maxno=INT_MIN; //smallest value possible in this cpp progra
    int minno=INT_MAX; //largest value possible in this cpp porgram
     for (int i = 0; i < n; i++)
     {
      maxno=max(maxno,array[i]); 
      minno=min(minno,array[i]);
       }
     cout<<maxno;
     cout<<minno;


    return 0;
 }*/ 

//SEARCHING IN ARRAYS //
/* #include<iostream> 
 using namespace std;  

int linearsearch(int arr[],int n , int key){
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
            return i; 
        }
    } 
    return -1;  
}int main(){
  int n; 
  cin>>n; 
  int arr[n];  
  int i; 
  for ( i = 0; i < n; i++)
  {
    cin>>arr[i];
  }
  
  int key;
  cin>>key; 
  cout<<linearsearch(arr,n,key);





    return 0;
 } */ 

   
 /*#include<iostream> 
 using namespace std; 
 int main(){ 
    cout<<"hi";
    return 0;
 }*/
 

 //BINARY SEARCH 
 /*#include<iostream> 
 using namespace std; 
 int binarysearch(int arr[],int n, int key){
 int s=0;
 int e=n; 

 int mid=(s+e)/2;
 while (s<=e)
 { 
    if (arr[mid]==key)
    {
        return mid; 
    } 
    else if(arr[mid]>key){
        e=mid-1;
    }
    else{ s=mid+1;}
    }
 
 return -1; 

 }
 int main(){ 
    int n; int key;  
    cin>>n;
    int arr[n]; 
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<binarysearch(arr,n,key);

    return 0; 
 } */ 
  
/*#include<iostream> 
#include<climits>
using namespace std; 
int main(){ 
    int n; 
    cin>>n;  
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i]; 
    } 
   int minno=INT_MAX; 
   for (  int i = 0; i < n; i++)
   {
     minno=min(minno,arr[i]);
   }
   cout<<minno;
    
    


    return 0; 
} */ 
