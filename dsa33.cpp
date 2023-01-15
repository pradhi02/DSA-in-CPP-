/*#include<iostream> 
using namespace std;
int main(){ 
int n;
cin>>n; 
 for (int  i = 1; i < n; i++)
 {
    for (int j = 1;  j< n; j++)
{

    cout<<j;
    }
  cout<<endl;  
 }
 
    return 0 ; 
} */ 

/*#include<iostream>
using namespace std;
int main(){ 
    int n; 
    cin>>n; 
    for (int i = 1; i <=n; i++)
    {
         for (int j = n; j >=1; j--)
         {
            cout<<j;
         }
        cout<<endl; 
    }
    
    return 0;
}*/ 

 /*#include<iostream> 
using namespace std;
int main(){
int n; 
cin>>n; 
int count=1;
for (int i = 0; i <n; i++)
{
    for (int j = 0; j<n; j++)
    { 
        cout<<count;
     count++;  
} 

cout<<endl;
} 
return 0;
}*/

/*#include<iostream> 
using namespace std;
int main(){ 
    int n;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        
        for ( int j= 1; j <=i; j++)
        {
            cout<<"*";
        }

       cout<<endl; 
    }
    
    return 0;
}*/ 

/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n; int count=1;
    for (int i = 1; i <n; i++)
    {
         for (int j = 1; j < i; j++)
         {
            cout<<count;
            count++;
         }

        cout<<endl; 
    }
     return 0;
}*/ 

#include<iostream> 
using namespace std;
int main(){
    int n;  int count;
    cin>>n;  
    for (int i = 1; i < n; i++)
    {
        if (n-i<n)
        {
            cout<<count;
            count++;
        } 
        else{
            cout<<" ";
           // count++;
        } 
        cout<<endl;
        
        
    }

    return 0;
}