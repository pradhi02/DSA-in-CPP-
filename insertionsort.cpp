#include<iostream> 
using namespace std; 
int main(){
    int n;
    cin>>n; 
    int arr{[n];

for (int i = 0; i <n; i++)
{
    cin>>arr[n];
    
}  
for (int i = 1; i < n; i++){
   int temp=a[i];
   int j=i-1;
   while (j>=0 && arr[j] ) // we use j for sorted subarray,which will compare from right to left
   {
    a[j+1]=a[j]; //the right value is asssigned to the left variable
      j--; //sine we are gpinf from right to left
   } 
   a[j+1]=temp;
   
   

}
    }



    return 0; 
}