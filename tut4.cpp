#include<iostream>
 using namespace std;  
  int c=100 ; 
  
 int main(){  
   ///********BUILT IN DATA TYPES*******//

   //float f=2.3f;//f se apan number ko floating point numbr specify kaare hai , ni to by default vo double treat krta hai. i.e decimal literal
   //long double d=2.3344l   ;//l likhenege which means long double 
      
   //cout<<"the value of f is "<<f<<endl <<"the value of d is "<<d; //sizeof operator use krke hum datatype k size print krva skate hai screen pr.
     //int a, b,c; 

     ///********FLOAT, DOUBLE , LONG DOUBLE LITERALS *******//

     //cout<<"the size of 34.4f is "<<sizeof(34.4f)<<endl; 

     //cout<<"Enter the value of a"<<endl; 
     //cin>>a;  
     //cout<<"enter the value of b"<<endl;
////cin>>b; 
//// /c=a+b; 
/////cout<<"the sum is" << :: c<<endl; (scope resolution operator k use krke hum global variable ki precendence badha skate hai over local variable)
//cin>>a+b;  







//***********REFERENCE VARIABLES****** 

  //float x=23.22;
  //float & y = x; //over here y is a reference variable
  //cout<<"the value of x is"<<x<<endl;
  //cout<<"the value of y is"<<y; 

 
//************typecasting*************** 
//typecasting means to chnage one datatype to another datatype  

 int a=45;
  int b=45.46;
   int c = int(b) ;

  cout<<"the value of a is"<<(float)a; 
  cout<<"the value of c is "<<c;



   return 0; 

 }
     