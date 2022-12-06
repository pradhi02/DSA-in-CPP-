/*#include<iostream>
using namespace std;
int main( ){
    int n;
    cin>>n;
     for (int i = 1; i<=n; i++)
     { int j;
       for ( j =1; j <=n-i; j++)
       {
         cout<<" ";

       }
        int k=i;
         for (; j<=n; j++)
            {
                 cout<<k--;
            }

    k=2;
    for ( ; j<=n+i-1 ; j++)
    {
     cout<<k++;
    }

   cout<<endl;


     }

return 0 ;
} */

/*#include<iostream>
using namespace std;
int main(){

 int n;
 cin>>n;
 for (int i = 1; i <=n; i++)
 {

  for ( int j = 1; j <=n-i; j++)
  {
    cout<<" ";
  }
  for (int j = 1; j <=i; j++)
  {
    cout<<" "<<"*"<<" ";
  }




cout<<endl; }



    return 0 ;

} */

/*#include<iostream>
using namespace std;
int main(){

 int n;
 cin>>n;
 for ( int i = 1; i <=n; i++)
 {
    for ( int j = 1; j <=n-i; j++)
    {
        cout<<" ";
    }

      for ( int j = 1; j <=2*i-1; j++)
      {
         cout<<"*";
      }

cout<<endl;
}
 for ( int i = n; i >=1; i--)
 {
    for ( int j = 1; j <=n-i; j++)
    {
        cout<<" ";
    }

      for ( int j = 1; j <=2*i-1; j++)
      {
         cout<<"*";
      }

cout<<endl;
}

 return 0;

}*/

/*#include<iostream>
using namespace std;
int main(){
   int n;
   cin>>n;

   for ( int i = 1; i <=3; i++)
   {

     for ( int j = 1; j <= n; j++)
     {

 if ( ((i+j) % 4==0) || (i==2 && j%4==0))
 {
  cout<<"*";
 }
 else{cout<<" ";}

     }
   cout<<endl;
 }
   return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){

int n;
bool isprime=true;
cout<<"enter the number"<<endl;;
cin>>n;

  for (int i = 2; i<n; i++)
  {

 if (n%i==0)
 {


cout<<"the number is non  prime"<<endl;
isprime=true;
break;
 }
 else {cout<<"the number is  prime"<<endl;
 isprime=false;

  }
 }
 return 0 ;
}*/

/*#include<iostream>
using namespace std;
int main(){

 int n , lastdigit , reverse =0 ;

cout<<"enter the number";
cin>>n;
 while (n>0)
 {
   lastdigit=n % 10; //reminder value milegi yha
    reverse=reverse * 10 + lastdigit;
    n=n/10; //hum number ko number se divide isliye krte hai taki hume next iteration me lastdigit s ep hele wala nmumber mile
 }
 cout<<reverse;



  return 0;
} */

/*#include <iostream>
using namespace std;
int main()
{
int n;
cin >> n;
while (n > 0)
{
int rem = n % 10;
cout << rem;
n = n / 10;
}
return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){

int a=12 , b=13;

int c;
 c=a;
 a=b;
 b=c;
 cout<<a<<b;

 return 0;
}*/

/*#include<iostream>
using namespace std;
int main() {
int n, lastdigit;
int reverse = 0;
cin>>n;
while (n>0)
{
  lastdigit=n%10;
  reverse=reverse * 10 + lastdigit;
  n=n/10; //ye reminder dega
}

cout<<reverse;



  return 0; }*/ 


#include<iostream>
//#include<cmath>
using namespace std; 
int main(){ 
int n , lastdigit; int cube = 0;  
//int sum=0; 
cin>>n;  
int originaln=n;
while (n>0)
{
lastdigit=n%10; 
cube = cube+(lastdigit*lastdigit*lastdigit); 
//sum+=pow(lastdigit,3);
n=n/10; 


} if (cube==originaln)
{
  cout<<"armstrong number"<<endl;
}
 else{ cout<<"not an armstrong number"<<endl;}


return 0; 
}







