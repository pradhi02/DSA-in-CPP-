/*#include<iostream> 
using namespace std; 
int main(){ 
    int n; 
    cout<<"enter the value of n"<<endl;
    cin>>n; 
    int sum=0; 
for (int i = 1; i <=n; i++) // we can also use the formula of sum of n naturals numbers is n(n+1)/2 
{
    sum=sum+i;
}
cout<<sum;


    return 0;
}*/ 

/*#include<iostream>
#include<math.h>
using namespace std; 
int main(){  
    int height,base , hypotenuse ; 
    cout<<"enter the height"<<endl;
    cin>>height;
    cout<<"enter the base"<<endl;
    cin>>base;
    cout<<"enter the hypotenuse"<<endl; 
    cin>>hypotenuse;
int a,b,c; 
a=height*height;
b=base*base;
c=hypotenuse*hypotenuse;
cout<<c; 
if (a+b==c)
{
    cout<<"hypotenuse triplet";

} 
else{cout<<"not triplet";}
return 0; 
}*/ 

#include<iostream> 
#include<math.h>
using namespace std; 
int main(){  
    int binarynum;
    int i=0; 
    cout<<"enter the binary number"<<endl; 
    cin>>binarynum; 
    int base=2; 
    int lastdigit; int decimalnum;
    lastdigit=binarynum%10; 
    decimalnum=pow(base,i) * lastdigit; 
    i++; 
    binarynum=binarynum/10; 

    cout<<decimalnum;
    

    

    return 0;
}