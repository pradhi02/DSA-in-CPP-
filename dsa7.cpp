#include<iostream> 
using namespace std; 
int main(){ 
    int n; int ans;
    cin>>n;
    int lastdigit; int sumofdigit = 0, productofdigit = 1;
    while (n>(-1))
    {
        lastdigit= n%10;
       sumofdigit=sumofdigit+lastdigit;
        n++;
    } 
    while (n>(-1))
    {
        lastdigit=n%10;
        productofdigit= productofdigit*lastdigit;
        n++;
    } 

    cout<<productofdigit-sumofdigit;
    
    


    
    
    return 0;
}