#include<iostream>
using namespace std;  
 

 class employee
 {
 private:
       int a , b , c ;
 public:
     int  e , d ;

    void setvalue(int a1 , int b1, int c1);
    void getvalue(){
        cout<<"the value of a is"<<a<<endl;
        cout<<"the value of b is"<<b<<endl;
        cout<<"the value of c is"<<c<<endl;
        cout<<"the value of d is"<<d<<endl;
        cout<<"the value of e is"<<e<<endl;
    }
 };
 void employee :: setvalue(int a1 , int b1 , int c1)/*yha scope resolution operator islye use krte hai kyukii hum employee ko bata rhi hai ki ye vo set data function hai jo hum ne alredy employee k andar decalre kiyta ahi */ {
     a =a1;
     b =b1; 
     c =c1;
 }
 int main (){ 
    employee harry; 
    harry.d=19;
    harry.e=222; 
   // harry.a=1223;
    harry.setvalue(1,2,3);
    harry.getvalue();
    

    
    return 0;
 } 





 #include<iostream>
using namespace std; 
class pradhi
{
private:
      int a, b ,c ; 
public:
     int d , e;
     void setage(int a1 ,int b1 , int c1); 
     void getage(){
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
        cout<<"the value of d is "<<d<<endl;
        cout<<"the value of e is "<<e<<endl;
     }
};

 void pradhi:: setage(int a1, int b1 , int c1)
{ a=a1;
  b=b1;
  c=c1;
}



int main(){ 
    pradhi one;
    one.d=122;
    one.e=133;
    one.setage(22,89,78);
    one.getage();

    return 0;
}
 
 
  
    


    