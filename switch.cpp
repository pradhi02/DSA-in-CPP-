#include<iostream> 
using namespace std; 
int main(){
    //cout<<"hi"; 
    int age;
    cin>>age;
    switch (age)
    {
    case 1:
          cout<<"age is 1 year old";
        break; 
        case 2:
        cout<<"age is 2 year old";
        continue; 
        
        
    
    default: cout<<"age is not mentioned";
        break;
    }
    return 0;
}