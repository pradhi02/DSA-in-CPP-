/*#include<iostream>
using namespace std; 
int main(){
    int a; int b;
    cout<<"enter two integers"<<endl;
    cin>>a>>b;
    char op; 
    //cout<<"input an operator"<<endl;
    cin>>op; 
    switch (op)
    {
    case '+':
        cout<<a+b; 
        break;
      case '=':
           cout<<a-b;
    break; 
    case '%':
    cout<<a%b;
    break; 

    case '*':
    cout<<a*b;
    break;
    default:
    cout<<"entered operation is invalid"<<endl;
        break;
    }


    return 0 ; 
} 
*/ 


#include<iostream>
using namespace std; 
int main(){
    char c; 
 cout<<"enter the character you want to check"<<endl;
 cin>>c;
 switch (c)
 {
 case 'a':
     cout<<"the entered character is a vowel"<<endl;
    break;
 case 'e':
 cout<<"the entered character is a vowel"<<endl;
 break;

 case 'i':
 cout<<"the entered character is a vowel"<<endl;
 break;

 case 'o':
 cout<<"the entered character is a vowel"<<endl;
 break; 

 case 'u':
 cout<<"enter charcter is a vowel"<<endl; 
 break;  

 default: 
 cout<<"the entered char is a consonant"<<endl; 
    break;
 }
    return 0;
}
