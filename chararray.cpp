#include<iostream>
using namespace std;  
void reverseString(char arr[],int n ){ 
 int s=0;
        int e=n-1; 
       while(s<= e) {
        swap(arr[s],arr[e]);
        s++;
        e--;        
       }
    

}
int getLength(char name[]){
    int count=0;
    for (int i = 0; name[i]!='\0'; i++)
    {
     count++;
    }
   return count; 
}
int main(){ 
    char arr[10] ; 
   cin>>arr; 
   cout<<"length"<<getLength(arr)<<endl;
   //reverseString(arr,10); 
   int len=getLength(arr); 
   reverseString(arr,len);
   cout<<arr;
   arr[2]='\0'; //arr k second index pr null character dal de 
   //jab bhi chararr array encounters first null character it stop printing furthure more letters 
   return 0;
}