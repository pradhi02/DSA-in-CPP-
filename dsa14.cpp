#include<iostream> 
using namespace std; 
int sumofarray(int arr[],int size){
    int ans=0;//initalize sum
    for (int i = 0; i < size; i++) //iterate through all elements of array
    {
        ans=ans+arr[i];
    }
    return ans; //returning ans
}
int main(){ 
    /*int array[4]={1,2,3,4};
    cout<<"the sum of all the elements of array is"<<sumofarray(array,4);
    cout<<"all is well"<<endl;*/ 
    int n;
    cin>>n;
    int array[n]; 
    for (int i = 0; i <n; i++)
    {
        cin>>array[i];
    } 
    cout<<"the sum of all elements of array is"<<sumofarray(array,n);
    
     
    
    
    return 0;
}