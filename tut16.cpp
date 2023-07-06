#include<iostream>
using namespace std;  
//function overloading is basically same name k function ko alg alag parameters me use  karna , in fucntion overloading hum alag alag datatypes bhi use kr sakte hai the compiler will ardjust according to that but in case 'char' me 'int' use kroge to error throw krengaa, but 'float' me 'int' use kr skate ho the funtion can ardjust 
int sum(int a, int b){
    cout<<"using function with 2 arguments"<<endl;
    return a+b;
} 
int sum(int a , int b , int c){ 
    cout<<"using function with 3 arguments"<<endl; 
    return a+b+c;
} 
//rectangle
 int area(int l , int b){
    return l*b;
 }  
 //circle
 int area(int r ){

    return 2*3.14*r*r;
 }
int main() {  
    //int x=2; int y=9 ; int z=89 ; 
    cout<<"the sum is"<<sum(2,9)<<endl;
    cout<<"the sum is"<<sum(8,1,7)<<endl;
    cout<<"the area of circlc is"<<area(98)<<endl;


    return 0 ; 
}