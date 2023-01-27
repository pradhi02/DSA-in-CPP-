#include<iostream>
using namespace std; 
int main(){ 
    int a, b;
    char operation;
    cin>>a;
    cin>>operation;
    cin>>b;
       switch (operation)
       {
       case '+':
        cout<<a+b<<endl;
        break;  
        case '-':
        cout<<a-b<<endl;
        break;  
        case '/':
        cout<<a/b<<endl; 
        break; 
        case '*':
        cout<<a*b<<endl; 
        break;
        case '%':
        cout<<a%b<<endl;
        break;  
        default: 
        cout<<"operation invalid"<<endl; 
        break;
       }
    return 0;
}
