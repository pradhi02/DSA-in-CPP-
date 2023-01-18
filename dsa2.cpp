/*#include<iostream> 
using namespace std;
int main(){ 
    int a= 'a';
    cout<<a ;

    return 0;
}*/ 
 /*#include<iostream> 
using namespace std;
int main(){ 
     unsigned int a =11;
    cout<<a;



    return 0; 
}*/

 
 //sum of even numbers code
 /*#include<iostream>
 using namespace std;
 int main(){
  int n; int sum=0;
  cin>>n; 
  
  for (int i = 2; i<=n;i= i+2)
  {
    sum=sum+i;
    
  }
  cout<<sum;
return 0;}*/

/*#include<iostream> 
using namespace std;
int main(){
   int a,b;
   cin>>a>>b;
   for (int i = 0; i < a; i++)
   {
     for (int j = 0; j< b; j++)
     {
       cout<<"a";
     }
     cout<<endl;
   }
   
}
*/
#include<iostream>
using namespace std;
int main(){ 

int a,b;
cin>>a>>b;
for (int i = a; i >0 ; i--)
{
  for (int j = 0; j <i; j++)
  {
    cout<<i;
  }
 cout<<endl; 
}




  return 0;
}