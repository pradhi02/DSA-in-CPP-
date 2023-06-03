   /*#include<iostream>
using namespace std;
int main(){
    cout<<"hello world ";
} */


/*#include<iostream> 
#include<climits>
using namespace std; 
int Getmax(int array[],int n){
 int maxno;
 for (int i = 0; i < n; i++)
 { maxno=INT_MIN;
 maxno=max(maxno,array[i]);
 }
 
return maxno;
}
int main(){ 
    int n; 
    cin>>n;
    int arr[n]; 
    for (int i = 0; i <n; i++)
    { 
    cin>>arr[i];
    } 
    cout<<"the maximum number in the array is"<<Getmax(arr,n)<<endl;
    


    return 0;
}*/ 

#include<iostream>
using namespace std;
int main(){ 
    int n;
    cin>>n;
    int arr[n]; 
    for (int i = 0; i<n; i++)
    {
     cin>>arr[i];
    }
    

    return 0;
}
