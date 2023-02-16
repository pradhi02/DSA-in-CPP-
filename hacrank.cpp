/*#include<iostream>
using namespace std; 
void plusMinus(int array[],int size){
    long double P=0,N=0,Z=0;
    for (int i = 0; i < size; i++)
    {
        if (array[i]>0)
        {
            P++;
        }
        else if (array[i]<0)
        {
            N++;
        } 
        else{
            Z++;
        }
         
    } 
    
    cout<<(P/size);
    cout<<(N/size);
    cout<<(Z/size);
    
    
} 
int main(){ 
    int n;
    cin>>n; 
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }  
    long double index =plusMinus(arr,n); 
    
    return 0; 
}*/ 

#include<iostream>
using namespace std; 
int compareTriplets(int A[3],int B[3]){ 
    int apoint=0; int bpoint=0;
    for (int i=0; i<3; i++) { 
        if (A[i]>B[i]) {
        apoint++;
        }
        else if (A[i]<B[i]) {
            
         bpoint++;
        } 
        else{
            continue;
        }
    } 
    return apoint,bpoint;
}
int main(){ 
    
    int Aar[3];
    for(int i=0;i<3;i++){
        cin>>Aar[i];
        
    }  
    int Bar[3];
    for(int i=0;i<3;i++){
        cin>>Bar[i];
    } 
    int index=compareTriplets(Aar,Bar);
    cout<<index;

    
    
    return 0;
}
