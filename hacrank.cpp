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

/*#include<iostream>
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
*/ 

 
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n; 
    for (int i = 1; i<=n; i++)
    {
        for (int j=0; j<n; j++){ 
            if (j<n-i)
            {
                cout<<" ";
            }
            else { 
                cout<<"*";
            }

        } 
        cout<<endl;
        
    }
    
    
    
    
    
    return 0;
} */ 


/*#include<iostream>
using namespace std; 
int catAndMouse(int x,int y,int z){ 
    int a,b;
    if (x>z)
    {
       a=x-z;
    } 
    else{
        a=z-x;   
    }
     if (y>z)
     {
        b=y-z;
     } else{
        b=z-y;
     }
     if (a>b)
     {
        cout<<"Cat A";
     } 
     else if (b>a)
     {
        cout<<"Cat B";
     } 
     else{
        cout<<"Mouse C";
     }
         

     
     

}
int main(){ 
    
    return 0;
}*/ 

#include<iostream>
using namespace std; 
int plusMinus(int array[],int size){ 
    long double  P=0,N=0,Z=0;
    for (int i = 0; i < size; i++)
    {
 
 if (array[i]>0)
 {
    P++;
} else if (array[i]<0)
{
    N++;
} 
else{
    Z++;
} 
} 

cout<<P/size<<endl;
cout<<N/size<<endl;
cout<<Z/size<<endl;
    
}
int main(){ 
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    } 
    long A=plusMinus(arr,n);
    cout<<A;
    

    return 0;
    }