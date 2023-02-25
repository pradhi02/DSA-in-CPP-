/*#include<iostream>
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
}*/ 

/*#include<iostream>
using namespace std; 
long aVeryBigSum(long array[],int size ){
    long sum=0;
    for(int i=0; i <size; i++){
        
        sum=sum+array[i];

    } 
    return sum;
}
int main(){ 
    int n;
    cin>>n;
    long arr[n]; 
for (int i = 0; i < n; i++)
    {
     cin>>arr[i];
    }
    
    long index=aVeryBigSum(arr,n);
    cout<<index;
    
    return 0;
}*/
#include<iostream>
using namespace std;
int compareTriplets(int a[3],int b[3]){  
    
    int A=0,B=0; 
    int array[2]={A,B};
    for (int i=0; i<3;i++) {
     
     if (a[i]>b[i]) {
      A++;
     }
     else if (a[i]<b[i]) {
         b++;
     
     } 
     else {
     A=0,B=0;
     }
    }
    
    return array;
}

int main(){ 
    int alice[3]={17,28,30};
    int bob[3]={99,16,8};
    int index=compareTriplets(alice,bob);
    cout<<index;

    
    return 0;
}

