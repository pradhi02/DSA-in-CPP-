#include<iostream>
using namespace std;
void swap(int arr[],int n){ //swapping the array
    int start=0;
   int end=1;
   while(start<n){ //if start will become equal to end toh we will not get last value to swap,hence start is < total number of elements in an array 
    swap(arr[start],arr[end]); //alternate swapping 
    start=end+1;
    end=start+1;
   } 
   cout<<endl;
}
void print (int array[],int size){
    for (int i = 0; i <size; i++)
    {
        cout<<array[i]<<endl;
    }
    cout<<endl<<endl;
}
int main(){  
     
    int arra[8]={1 ,2 ,3 ,4,5,6,7,8};
    swap(arra,8);
    print(arra,8);
    return 0;

}
