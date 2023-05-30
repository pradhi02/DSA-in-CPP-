#include<iostream>
using namespace std;
int main(){
 int a=12;
int* b=&a;  
int glo=12; 
 int* flo=&glo;
 int**clo=&flo;
// pointers is a data type that holds the address of other data types 

//address of operator---& (address of operator)
//defrence operator ---* (value at operator)
    cout<<"the address of a is "<<&a<<endl; //ye address baatyega since & is used1
    cout<<"the address of a is "<<*b<<endl;; // OVER HERE * k bad pointer variable hai which gives the value.  
    cout<<"the address of glo is"<<&a<<endl;;
    cout<<"the value of a is "<<*flo; 
    cout<<"the value of flo is "<<**clo;

    
    return 0; 
}