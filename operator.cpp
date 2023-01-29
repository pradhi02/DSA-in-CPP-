 /*#include<iostream> 
using namespace std;
int main(){ 
    int a=4;
    int b=3; 
    cout<<" a&b"<< (a&b)<<endl;
    cout<<" a|b"<<(a|b)<<endl;
    cout<<" a^b"<<(a^b)<<endl;
    cout<<" ~a"<<(~a)<<endl;
    
    return 0;
}*/ 
/*#include<iostream> 
using namespace std;
int main(){
    cout<<(12>>2);
    cout<<(12<<2);
    return 0; 
}*/ 
/*#include<iostream> 
using namespace std;
int main(){  int i;
int n;
 cin>>n;
for (int i = 1; i <=n; i++)
{
 cout<<i;
}

    
    return 0;
}*/ 

/*#include<iostream> 
using namespace std;
int main(){ 
int n;
cin>>n;  
int sum=0;
for (int i = 1; i <=n; i++)
{
  sum=sum+i; 
} 
cout<<sum;
cout<<endl;

    return 0;
}*/ 

#include<iostream>
using namespace std; 
int main(){ 
    int n=10;
    cin>>n;
    int t1 , t2 , t3;
    t1=0;
    t2=1;
    for (int i = 0; i <=n; i++)
    {
     t3=t1+t2; 
     cout<<t3;
     t1=t2;
     t2=t3;

     }
     
    
    return 0;
}