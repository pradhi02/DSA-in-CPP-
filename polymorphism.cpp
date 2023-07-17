/*#include<iostream>
using namespace std;
class A{
    public: 
    void SayHello(){
        cout<<"hello people"<<endl;
    } 
    int SayHello(int n){
        cout<<"hello people"<<endl;
        cout<<n<<endl;
        return n;
    } 
    int SayHello(int a, string s ){
        cout<<"hello your name is"<<s<<"age is"<<a; 
        return a; 
    }
};
int main(){  
    A obj;
    obj.SayHello();
    obj.SayHello(12);
    obj.SayHello(2);

    return 0;
} */ 


//operator overloading 
/*#include<iostream>
using namespace std; 
class complex { 
    int real;
    int imag; 

    public:   
    complex (){  
        real=0;
        imag=0;
    }
     complex (int r, int i){
        real=r;
        imag=i;
     } 
     void print(){
        cout<<real<<"+"<<imag<<"i"<<endl;
     }
     //overloading complex operator 
     complex  operator +(complex c){
       // cout<<"print hello world";  
        complex temp; 
        temp.real=real+c.real;
        temp.imag=imag+c.imag; 
        return temp;

     } 


} ;
int main(){ 
   // int a, b;
    complex c1(2,7);
    complex c2(1,8);
    complex c3;
    c3=c1+c2;
    c3.print(); 
    return 0;
} */ 

#include<iostream>
using namespace std; 
class print{ 
     public:
    void operator() (){
        cout<<"you are'a shining star hooman"<<endl;
    } 

};
int main(){  
    print g ; 
    g();

    return 0;
}


