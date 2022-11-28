/*#include<iostream>
using namespace std; 
int main(){ 
    int ppl;
    cout<<"enter the number of people who stepped inside the lift"<<endl; 
    cin>>ppl; 
    if (20<= ppl>=10)
    {
        for (int i = 0; i < 10; i++)
        {
            cout<<"10th floor is the limit"<<endl;
        }
     } 
     else if(ppl>=20){
        for (int i = 0; i < 20; i++)
        {
            cout<<"20th floor is the limit"<<endl;
        }
        
     } 
     else{cout<<"the lift cannot move for less than 10 people"<<endl;}
    
    
      return 0; 
}   */ 


/*#include<iostream>
using namespace std; 
int main(){ 

int n;  
cout<<"enter n";
cin>>n;
while (n>10)
{
    cout<<n%10; //reminder operator
   // cout<<n; 
}





    return 0; 
} */ 


#include<iostream> 
using namespace std; 
int main(){

int n ; 
cout<<"enter n "<<endl; 
cin>>n; 
do
{
    cout<<n*n;
} while (n<10);

}