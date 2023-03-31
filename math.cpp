/*#include<iostream>
using namespace std; 
bool isPrime(int n){
  if(n<=1)
  return false; 

  for(int i=2;i<n;i++){
    if(n%i==0){
        return false;
    } 

  } 
  return true;
    
}
int main(){ 
    int num;
    cin>>num;
    cout<<isPrime(num);
    
    return 0;
}*/  

#include<iostream>
using namespace std;  
//recursion method 
/*int gcd(int a,int b){
    if(a==0)
    return b; 
    gcd(b%a, a); 
}*/ 

//iteration method 
int gcd(int a,int b){
    if(a==0){
        return b;
    } 
    if(b==0){
        return a; 
    } 
    while(a!=b){
        if(a>b){
            a=a-b;
        } 
        else { b=b-a;}
    } 
    return a;
}
int main(){
    //int n1,n2;
    //cin>>n1>>n2;
    cout<<gcd(5,10);
    return 0;
}