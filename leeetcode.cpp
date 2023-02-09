#include<iostream>
using namespace std;
 bool isPalindrome(int x) {
long int ld; long int  rev=0; int temp=x;
while (temp>0)
{
    ld=x%10;
    rev=rev*10+ld;
    x=x/10;
} 
long int index=rev;
if (index==x)
{
    return true;
}

return false;

}
      
        
            
int main(){ 
    int n;
    cin>>n; 
    int element=isPalindrome(n);
    cout<<isPalindrome(n);
    cout<<element;
    

    
    return 0;
}