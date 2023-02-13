#include<iostream>
using namespace std;
int arraySum(int array[],int size) {
    int sum=0;
    for (int i=0; i<size; i++) { 
        sum=sum+array[i];
     } 
     return sum;
}

int main(){ 
    int n;
    cin>>n;
    int arr[n]; 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    int index=arraySum(arr,n);
    cout<<index;

    
    
    return 0;
}