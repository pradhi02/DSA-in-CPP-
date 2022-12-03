/*#include<iostream>
using namespace std ;
int main(){

 char c = '*' ;
  for (int i = 1; i < 10; i++) //columns
  {
    for ( int  j  = 1; j < 5; j++)//rows
    {
        cout<<c;
    }

    cout<<c<<endg++
  }   */

/*#include<iostream>
using namespace std;
int main(){
 cout<<"you can print whaterever shape you want"<<endl;

 int R;  //rows
 int C;  //columns
  cout<<"enter the numbers of rows and columns"<<endl;
  cin>>R>>C;
     for ( int i = 1; i < R; i++)
     {

           for (int j = 1; j < C; j++)
           {
              cout<<"*";
           }
            cout<<"*"<<endl;
     }

return  0 ;

} */

// rectangle patter
/* #include <iostream>
using namespace std;
int main()
{

    int row, col;
    cin >> row >> col;
    for (int i = 1; i <=row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
} */

/*include<iostream>
using namespace std;
int main(){
    int row, col;
    cin>>row>>col;
    for (int i = 1; i <=row; i++)
    {
        for (int j = 1; j <=col; j++) {cout<<"*";}
        {
             if (i==1 || i== row || j==1 || j==col)
             {
                       cout<<"*";
             }
              else {
                cout<<" ";
              }
        }
         cout<<endl;
    }




    return 0 ;

}  */

/* #include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "enter the number of lines for inverted pryamid" << endl;
  cin >> n;
  for (int i = n; i >= 1; i--) // ye print krega rows ko
  {
      for (int j = 1; j <= i; j++) // ye un rows me * ko print krne k kaam ayga
      {
          cout << "*";
      }

      cout << endl;
  }

  return 0;
}    */ 



/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <=n; i++)
     {
        for (int j = 1 ;j<=n; j++) // row number
        {
            if (j<=n-i)
            {
                cout <<" ";
            }
            else
            {
                  cout<<" * ";
            }
        }
        cout << endl;
    }

    return 0;
}   */ 


/*#include<iostream>
using namespace std;
int main(){ 

cout<<"enter the number of rows and columns"<<endl;
int row, col; 
cin>>row>>col; 
for (int i = 1; i <=row; i++) //row number
{
    for (int j = 1; j <=col; j++)
    { if (j%2==0)
    {
        cout<<" ";
    }
     else{cout<<"&";}
        
    }
    cout<<endl;
}



    return 0; 
} */ 


/*#include<iostream>
using namespace std; 
int main(){  
   
//cout<<"enter n ";
 int n; 
 cin>>n;
  for (int i = 1; i <=n; i++) //rows
  {
    for (int j = 1; j <=i; j++)
    {
        cout<<i; 
    }
   cout<<endl;
  }
  
  return 0; 
} */ 



 /*#include<iostream>
using namespace std; 
int main(){ 


cout<<"enter the number of row and column"<<endl;
int ro;
int col;
cin>>ro>>col; 
//int i=1 , j = 1; 
for (int i=1 ; i <=ro; i++)
{
 for (int j=1 ; j <=col; j++)
 {
    if (i==1 || i == ro || j == 1 || j ==col || i==j )
    {
        cout<<"*";
    }
   else {cout<<" ";} 
 }
  cout<<endl;
}

 return 0;
}*/


#include<iostream>
using namespace std; 
int main(){ 

int n; 
cout<<"enter the value of n"<<endl; 
cin>>n; 
for (int i = n; i>=1; i--)
{
    for (int j = 1 ; j <= i ; j ++)
    {
        cout<<" & ";
    }
    cout<<endl; 
}

    


    return 0;
}