/*#include<iostream>
using namespace std;
int main(){

   int date; int pocketmoney;
   cout<<"enter the date"<<endl;
   cin>>date>>pocketmoney;
   for (int i = 1; i <=31; i++)
   {
       if (i%2==0)
       {
          continue; //cout<<"you cannot go out"<<endl;

       }
       if (pocketmoney==0)
       {
           break;
       }

       cout<<"you can go out today"<<endl;
       pocketmoney=pocketmoney-300;
       cout<<"no money left"<<endl;

   }


   return 0;
}  */

/*#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter the number"<<endl;
  cin>>n;
  for (int i = 1; i<10; i++)
  {
     if (i==5)
     {
        continue;
     }
     if (i==7)
     {
        break;
     }


   cout<<n<<"x"<<i<<"="<<n*i<<endl;

  }

return 0;
} */

/*#include <iostream>
using namespace std;
int main()
{
   int n;
   cout << "enter the value of n" << endl;
   cin >> n;
   for (int i = 1; i <= n; i++)
   {

      // cout<<i<<endl;
      if (i % 2 == 0)
      {
         continue;
      }
      cout << i << endl;
   }

   return 0;
} */
/*
 #include <iostream>
using namespace std;
int main()
{
   int n;
   cout << "enter the number n" << endl;
   cin >> n;
   int i;
   for ( i = 2; i < n; i++)
   {
      if (n % i == 0)
      {
         cout<< "number is non prime" << endl;
         break;
      }
   }
   if (i==n)
   {
      cout<<"The number is prime number"<<endl;
   }
   return 0;

}  */

/*#include <iostream>
using namespace std;
int main() {
int n;
cout<<"Enter a number:";
cin>>n;
int i;
for (i=2; i<n; i++) {
if (n%i==0) { //found a factor

cout<<"Not a prime"<<endl;
break;
}
}
if (i==n) {
cout<<"Prime Number"<<endl;
}
return 0;
}  */

/*#include<iostream>
using namespace std;
int main(){
 int a, b;
  cin>>a>>b;
  for (int num = a; num <= b; num++)
  {  int i;
     for ( i = 2; i < num; i++)
     {
        if (num%i==0)
        {
           break;
        }

     }
     if (i==num)
     {
             cout<<num<<endl;
     }


  }



  return 0;
}
*/

/*#include <iostream>
using namespace std;
int main()
{
   int n;
   cout << "enter the value of n" << endl;
   cin >> n;
   for (int i = 1; i < n; i++)
   {
      if (i == 10)
      {
         break;
      }

    cout << i * n << endl;
   }

   return 0;
}     */


#include<iostream>
using namespace std; 
int main(){
   int n; 
   cout<<"enter the number of people"<<endl;
   cin>>n; 
   for (int i = 0; i < 10; i++)
   {
      if (n%2)
      {
         
      }
      
   }
   






   return 0; 
}
