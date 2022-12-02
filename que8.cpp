/*#include<iostream>
using namespace std; 
int main(){

int i = 3; 
int a ; 

cout<<++i; 
cout<<i++; 
cout<<--i; 
cout<<++i; 
  a = ++i + i++ + --i - ++i ; 
cout<<a;
    return 0; 
} 
*/ 

/*#include<iostream>
using namespace std; 
int main(){
int i=1 , j = 2, k=3;

int m= i-- - j-- - k--;
cout<<i<<endl; 
cout<<j<<endl;
cout<<m<<endl;


    return 0; 
} */ 




/*#include<iostream>
using namespace std; 
int main(){
int n ; 
cout<<"enter the number n"<<endl;
cin>>n; 
 if (n>10)
 {
    cout<<"entered numbers is more than 10"<<endl;
 } else if (n<10)
 {
    cout<<"enetred value is less than n"<<endl;
 }
  else{ cout<<"entred value is equal to n"<<endl;

  }
 
    return 0; 
} */ 


#include<iostream>
using namespace std; 
int main(){ 
    int n ; 
 cout<<"enter the numbers n " <<endl;
 cin>>n; 
 if (n%2==0 && n%3==0)
 {
    cout<<"the number is divisible by both 2 and 3 "<<endl;
 } 
    else if (n%2==0)
    {
        cout<<"divide by two"<<endl;
    } 
    else if (n%3==0)
    {
        cout<<"divisible by three"<<endl;
    } 
    else{


        cout<<"divisible by none"<<endl; 
    }
    
    
 




    return 0 ; 
}