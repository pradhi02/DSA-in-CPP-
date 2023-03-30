#include<iostream>
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
}