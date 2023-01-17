/*#include<iostream>
using namespace std;
int main(){
    int n; int i,j;
    cin>>n; char c= ('A'+i+j-2);
    for (i = 1; i <=n; i++)
    {
        for ( j = 1; j <=i; j++)
        {
            cout<<c;
        }
        cout<<endl;

    }

    return 0;
}*/

/*/ #include<iostream>
 using namespace std;
 int main(){
    int n;
    //nt t=2;
    cin>>n;
    int i,j;



    for (i = 1; i <=n; i++)
    {
        for ( j = 1; j<=i; j++)
        { char c= ('D'+i+j-2);
            cout<<c;
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
 for (int i = 1; i <=n; i++)
 {
    for (int j = 1; j <=n-i; j++)
    {
      cout<<" ";
    }
    for (int j = 1; j<=i; j++)
    {
        cout<<" "<<"*"<<" ";
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
for (int i=n; i>=1; i--){
for (int j=1; j<=i; j++)
{
    cout<<"*";
}

cout<<endl;}

return 0;
 }*/

/*#include<iostream>
using namespace std;
int main(){
 int n;
 cin>>n;
for (int i=n;i>=1; i--)
{
    for (int j =1; j<=n-i;j++)
    {
        cout<<" ";
    }
    for (int j=1; j<=i; j++)
    {
     cout<<"*";
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
    for (int i = n; i>=1;i--)
    {
        for (int j = 1; j <=n-i; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <=i; j++)
        {
            cout<<j;
        }
        cout<<endl;

    }

    return 0;
} */

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n; int i; //int s=2;
    for ( i = n; i>=1; i--)
    {
        for (int j=1; j<=i; j++)
        {
            cout << j;
        }  
        for (int j=2; j>=(2*n); j++)
        {
           cout<<"*";
           
        }
     for (int j=n;j>=1; j--)
      {
        cout<<j;
      }
      
 
cout << endl;
 }
 
 
 
    return 0;
}
