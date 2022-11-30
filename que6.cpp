/*#include<iostream>
using namespace std;
int main(){
int age; 
cout<<"enter the age"<<endl;
cin>>age; 
 switch (age)
 {
 case 10:
    cout<<"you can attend kids party";
    break;  //break hamare switch statement ko terminate kr deta hai, henece the code stops runnung and comes out of the switch 

    case 15: 
    cout<<"you can attend teenage party";
     break; 

     case 20: 
     cout<<"you can enter adult party"<<endl;  
     break; 
 default: 
 cout<<"you are still a underage or overaged to attent any party here"<<endl; 
    break;
 }
    return 0; 
} */  


#include<iostream>
using namespace std; 
int main(){ 

    int n; 
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
           for ( int j = 1; j< =n-i; j++)
           {
            cout<<"*";
           }
           
    } 
    cout<<endl;
     
    return 0 ; 
}