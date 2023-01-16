/*#include<iostream> 
#include<iostream> 
using namespace std; 
int main(){ 
int n; 
cin>>n; 
for (int i = 1; i <=n; i++)
{
    if (i%2==0)
    {
        cout<<"";
    }
    

    else{
        cout<<i<<endl;
    }



}return 0;
}*/ 

/*#include<iostream> 
using namespace std; 
int sum_of_ntherms(int n){
    int sum=((n*(n+1))/2);

    return sum;
}
int main(){
    int n; 
    cin>>n;
    cout<<sum_of_ntherms(n);
     return 0;   
}*/ 
#include<iostream> 
using namespace std; 
int main(){ 

int n;
cin>>n;
while (n>=2)
{ if (n%2==0)
{
    cout<<"not prime";
    
}
else{
 cout<<"prime"<<endl;}
 break;
}



    return 0;
}