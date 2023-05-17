#include<iostream>
using namespace std; 
int main(){  
      int index=0;
   // char string = "hi pradhi is a good girl";  
    string digit= "123";
    int number = digit[index]-'0';  //jab hum string me chezxe store krte hai toh vo ascaii value sse store hoti hai isliye digit jb hum access krna chaha rhe ahi toh we are getting the ascaII VALUE HENCE WEHN WE MINUS THE Aascaii value of 'o' from digit[index] that is 50-48  we get 2 that is the exact va;ue at index 0 of digit string 
    cout<<number;

  
    return 0;
}