/*#include <iostream>
using namespace std;
int main()
{
    int i, sum = 0;
    for (i = 1; i <= 10; i++)
    {
        cout << i << endl;
        sum = sum + i;
        cout << sum;
    }

    return 0;
} */

/*#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the number of row and column"<<endl;
    cin>>a>>b;
    for (int i = 0; i <=a; i++)
    {
        for ( int j = 0; j<=b; j++)
        {
            cout<<"@";
        }
             cout<<endl;

    }


    return 0 ;
} */

/*#include <iostream>
using namespace std;
// int , j;
int main()
{
    for (int i = 1; i <= 4; i++) // row
    {
        for (int j = 1; j <= 4; j++) // column
        {
            cout << "_P_R_A_D_H_I";
        }

        cout << endl;
    }

    return 0;
}*/

/*#include <iostream>
using namespace std;
int main()
{   int a, b;
    int i, j;
    cout << "enter the number of rows and columns" << endl;
    cin >> a >> b;
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= b; j++)
        {
            if (i == 1 || i == a || j == 1 || j == b)
            {
                cout << "p";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
} */ 

/*#include<iostream>
using namespace std; 
int main(){ 
    int n; 
    cout<<"enter the value of n"<<endl;
    cin>>n; 
    for (int i = n ; i>=1; i--)
    {  
        for (int j = 1; j <=i; j++)
        {
            cout<<i;
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
   
 for (int j = 1; j <=i ; j++)
 {
    cout<<" @ "; 
 }
 
 cout<<endl;


}




    return 0; 
} */ 


/*#include<iostream>
using namespace std; 
int main(){ 
 int n; 
 cin>>n; 
  for ( int i= 1; i <=n; i++)
  {
     for (int j = 1; j <=n; j++)
     {
        cout<<"*";
     }


    cout<<endl; 
  } return 0; 
}*/ 

/*#include<iostream> 
using namespace std;
int main(){ 
   int n; 
   cin>>n; 
   for (int i = 1; i <=n; i++)
   {
     for ( int j = 1; j <= (n+1)-i  ;  j++)
     {
         cout<<"q";
     }
      cout<<endl;
      cout<<endl;
   }
   


    return 0; 
} */ 

/*#include<iostream> 
using namespace std;
int main(){ 

  int n; 
  cin>>n; 
  
  for ( int i = 1; i <=n; i++)
  {
     for ( int j = 1; j <= i ; j++)
     {
        cout<<j; 
     }
     
     cout<<endl;
  }
  
return 0; 
} */
 

 /*#include<iostream>
 using namespace std; 
 int main(){ 
int n; 
cin>>n; 
int i, j;
for ( i = 0; i <=n; i++)
{
     for ( j = 1; j <= n-2*i; j ++)
     {
        cout<<"k";
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
  for ( int i = 0; i<=n; i++)
  {
     for ( int j = 0; j<= n-i; j++)
     {
        cout<<"*";
     }
      cout<<endl; 
  }
  
 return 0 ;
 } */ 
/*/ #include<iostream> 
 using namespace std; 
 int main(){ 
    int n; 
    cin>> n; 
 
 for (int i = 0; i <=n; i++)
 {
    for ( int j = 0; j <=n; j++)
    {
         if (n-i<=j) {
            cout<<"*"; 
         }  else {cout<<" ";}
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
for ( int i = 0; i <=n; i++)
{
     for ( int j = 1; j <=n-i; j++)
     {
        cout<<j; 
     }
    cout<<endl; 
}

 return 0  ; 
} */

/*#include<iostream>
using namespace std; 
int main(){  
    int n; 
    cin>>n; 
    for ( int  i = 1; i <=n; i++)
    {
        for ( int j = 1; j <=i; j++)
        {
            
         if ( (i+j) % 2==0)
         {
            cout<<"1";
         }
          else {
            cout<<"0";
          }

    }
       cout<<endl;  
    }
     return 0; 
} */  

/*#include<iostream> 
using namespace std; 
int main(){  
    int n ; 
    cin>>n;
    for ( int i = 1; i <=n; i++)
    {
        for (int j = 1; j<=n-i; j++)
        {
            cout<<" ";
            
            
        } 
        for ( int j = 1; j <= n; j++)
        {
            cout<<"*";
        } 
        for (int j = 1; j <=n-i; j++)
        {
            cout<<" ";
        } 
        for (int j = 1; j <=n; j++)
        {
            cout<<"*";
        }
        
        
        
      cout<<endl;  
    }
    

    return 0; 
} */ 


#include<iostream>
using namespace std; 
int main(){
int n; 
cin>>n; 
for ( int i = 1; i <=n; i++)
{
     for (int j = 1; j <= n-i; j++)
     {
        cout<<" ";
     } 

     for (int j = 1; j <=i; j++)
     {
        cout<<" "<<j<<" ";
     }
     

   cout<<endl;  
}

    return 0; 
}