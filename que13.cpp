/*#include<iostream> 
using namespace std; 
int main(){ 

int r, c; 
cin>>r>>c; 
for (int i = 1; i <=r; i++)
{
     for (int j = 1; j <=c; j++)
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
int fact=1;
cin>>n; 
for (int i = 1; i <=n; i++)
{
   fact=fact*i; 
   
}

cout<<fact; 


   return 0; 
 }*/ 

/*/ #include<iostream> 
 using namespace std; 
 int sum(int n  , int l ){
   int add;
   add=n+l;
   return add;
 }  
 int main(){
   int num1,num2;
   cout<<"enter num1"<<endl;
   cin>>num1;
   cout<<"enter num2"<<endl;
   cin>>num2; 
   cout<<sum(num1,num2);



return 0; 
 }*/ 
 /*#include<iostream> 
 using namespace std; 
 bool isprime(int num){
   for (int i = 2; i <=num; i++)
   {
    if(num%i==0){
      return false;
    } 
    return true;
}}
 int main(){ 
   int a,b;
   cin>>a>>b;   
   for ( int i = a; i <=b; i++)
   {
      if (isprime(i))
      {
         cout<<i<<endl;
      }
      
   }
   
   return 0;
 }*/
 
 /*#include<iostream>
 using namespace std; 
 bool maximum(int a,int b){
   if(a>b){ 
   return true;
   } 
   return false;
 }
 int main(){
   int num1,num2;
   cin>>num1>>num2;
   if (maximum(num1,num2))
   {
      cout<<num1<<"is greater than "<<num2<<endl;
   } else{cout<<num2<<" is greater than "<<num1<<endl;}
   
   return 0; 
 }*/ 


/*#include<iostream> 
using namespace std; 
void fib(int n){
  int t1=0;
  int t2=1;
  int nextterm; 
  for ( int i = 1; i <=n; i++)
  {cout<<t1<<endl; 
   nextterm=t1+t2; 
   t1=t2;
   t2=nextterm; 
    
  } 
  return ; 
  }
int main() { 
   int num; 
   cin>>num; 
   fib(num);
   return 0;
} */ 

/*#include<iostream> 
using namespace std; 
int fact(int n){
   int temp=1;
 for (int i = 2; i<=n; i++)
 {
   //int temp=1; 
   temp=temp*i;
   
 }
 return temp;
  } 
 int main(){
   int num;
   cin>>num; 
   cout<<"the factorial of"<<num<<"is"<<fact(num);
return 0; 
}*/ 


/*#include<iostream> 
using namespace std; 
int fact(int num){
      int temp=1;
        for (int i = 2; i <=num; i++)
        { temp=temp*i;  }
        
   return temp;
    } 
    int permuitation(int a,int b){
      int c=a-b;
      int permute=fact(a)/(fact(b)*fact(c)); //bracket ki galti hori 
      return permute; 
    }

int main(){ 
   int num1;
   int num2; 
   cin>>num1>>num2; 
   cout<<"ther permutation of num1 and num2 is "<<permuitation(num1,num2)<<endl;
   //permuitation(num1,num2)
   

   return 0;
}*/ 

#include<iostream> 
using namespace std; 
int fact(int n){
  int temp=1;
  for (int i = 2; i <=n; i++)
  {
   
    temp=temp * i;
    
  }
  
return temp; 
}
int main(){ 
  int num; 
  cin>>num; 
  for ( int i = 0; i <=num; i++)
  {
    for (int j = 0; j <=i; j++)
    {
       int permutation=fact(i)/(fact(i-j)*fact(j));
       cout<<permutation;
    }
    cout<<endl;
  }





return 0;
}
