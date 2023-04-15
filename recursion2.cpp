/*#include<iostream>
using namespace std; 
bool isSorted(int arr[],int size){
    //base case  
    bool ans;
    if(size==0 || size==1){
        return true; //agar 0 ya 1 element hai toh array alredy sorted hoga  
    } 

    //procressing line 
    if(arr[0]>arr[1]){
        return false; 
    } 
    else{ 
     ans=isSorted(arr+1,size-1);  //ecurring relation, mtlb 1 and 2nd element toh sorte hai ab next elenent se chheck krte hain  siye arr+1 and size 1 se kaam ho jayega brooo
    }  
    return ans;
}
int main(){ 
    int arr[5]={2,6,8,2,10};  
    bool answer = isSorted(arr,5);
    if(answer){
        cout<<"array is sorted ";
    } 
    else { cout<<"array is not sorted broo kya kr rha hai gadhe";}
    
    return 0; 
}*/ 

/*#include<iostream>
using namespace std; 
int arraySum(int arr[],int size) {
   // int sum=0; int ans;
//base case
if(size==0){
    return 0;
} 
if(size==1){
    return arr[0];
}
 int remainingelement=arraySum(arr+1,size-1);
 int sum=arr[0]+ remainingelement; 
 
 return sum;

}
int main(){  
    int array[6]={1,2,3,4,5,7}; 
    int answer=arraySum(array,6);
    cout<<answer;

    return 0;
} */ 

/*#include<iostream> 
using namespace std;  
 bool isfound(int array[],int size,int key){
    //base case 
    if(size==0){
        return -1;
    }  

    if(array[0]==key){

        return true;
    } 
    else{ 
        bool ans=isfound(array+1,size-1,key);  
        return ans;
    } 
    
 }
int main(){  
    int arr[3]={1,2,3};
    //int key=;
    bool answer=isfound(arr,3,2);
    cout<<answer;

    return 0;
}
*/ 
 
 //binary search in cpp 
/*
#include<iostream> 
using namespace std;  
void print (int arr[],int s,int e){
    //int mid=s 
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
        
    } 
    cout<<endl;
}
bool binarySearch(int arr[],int s,int e , int key){
    //base case 
    //elememnt not found  
    print(arr,s,e);   
    cout<<endl;
     if (s>e){
        return false;
    }  
    //if element is  found 
        
    int mid=s+(e-s)/2; 
    cout<<"value of mid is "<<mid<<endl;

     
     if(arr[mid]==key){
        return true; 
        
     }  
     if(arr[mid]>key){
     return binarySearch(arr,s,mid-1,key);
     } 
     else {
       return  binarySearch(arr,mid+1,e,key);
     } 
    // return true;
}
int main(){  
 
 int arr[14]={11,22,33,44,55,66,77,88,99,100,1112,3223,3344,4455};
 bool ans=binarySearch(arr,0,13,1112); 
 cout<<ans;
    return 0;
}*/ 

#include<iostream>
using namespace std;  
void selectionsortusingrecursion(int arr[],int size, int index=0){
//base case , if the array is over then stop 
if(index>size){
    return;
}   
//find the element in the remaining array 
int minimum=index ; 
for(int i=index+1;i<size;i++){
    if(arr[i]<arr[minimum]){
        minimum=i;
    }
} 
//swapping the mimimmum elemenet with the first element in the remaining array 

swap(arr[index],arr[minimum]); 




}
int main(){  
    
    
    return 0;
}