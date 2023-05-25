/*#include<iostream>
using namespace std;

   bool iseven (int ){
      int n;
      cin>>n;
     if (int n%2==0)
     {
     return 0;
     }
     else {else return 1 };


    return
   }*/

#include<iostream> 
using namespace std;
int fact (int n ){
    
    if (n>1)
    {
     return n*fact(n-1);
    } 
    else
    return 1;
    

} 

int ncr(int n ,int r ){
    //int n,r;
    int nemo= fact(n);
    int deno=fact(r)*fact(n-r);
    return nemo/deno;
}
int main(){  
int num1,num2;
cin>>num1>>num2;
cout<<ncr(num1,num2);


     return 0;
}