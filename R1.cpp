/*#include<iostream>
using namespace std;  
void printnumber(int num){ 
    //base case  
    if( num<=0){ 
        return; 
    }   
    
  recursive call   
printnumber(num-1); 
cout<<num<<endl; 

return;
    
}
int main(){   
 printnumber(5);

     
    return 0;
}*/ 

/*#include<iostream>
using namespace std;  
void printnum(int n){
  //basecase
  if(n==6){
    return;
  } 
  cout<<n;
  printnum(n+1);
}
int main(){ 
  cout<<"hello world"; 
  printnum(1);
  return 0;
}*/  
   
/*#include<iostream>
using namespace std;  
int sumnum(int i, int n, int sum=0){
 
  //base case 
  if(i==n){  
    sum=sum+i;
    return sum; 
  }  
  sum=sum+i;
  //recursive case
  cout<<i<<endl; 
  sumnum(i+1,n,sum);
  

}
int main(){  
  
  cout<<sumnum(1,5,0);

  return 0;
}*/ 

/*#include<iostream>
using namespace std; 
int factorial(int num){
  if(num==0 || num==1){ 
    cout<<num<<endl;
    return 1;
  }  
  cout<<num<<endl;
  int answer=num * factorial(num-1); 
  return answer;
}
int main(){  
  cout<<factorial(5);



  return 0;
}*/ 

/*#include<iostream>
using namespace std; 
void printfib(int a,int b,int n){
  //base case 
  if(n==0){
    return;
  } 
  int c=b+a;
  cout<<c<<endl;
  printfib(b,c,n-1);
}
int main(){   
  int n; 
  cin>>n;
  int a=0;
  int b=1;
  cout<<a<<endl;
  cout<<b<<endl;  



     

  printfib(a,b,n-2);

  return 0;
}*/ 

/*#include<iostream> 
using namespace std; 
int powerfun(int x,int n){
  //base case 
  if(x==0){
    return 0;
  } 
  if(n==0){
    return 1;
  } 
int poweminueone=powerfun(x,n-1); 
int answer=x*poweminueone;
return answer;

}
int main(){  
  cout<<"helllo man"; 
  cout<<powerfun(2,5);
  return 0;
}*/ 

/*#include<iostream>
using namespace std; 
int power(int x , int n){
  if(x==0){
    return 0;
  }
  if(n==0){
    return 1;} 
    //even case 
    if(n%2==0){
      return power(x,n/2)* power(x,n/2);
    } 
    else { 
      //odd case 
      return power(x,n/2) * power(x,n/2) * x;
    }

}
int main(){ 
cout<<"hello bro"<<endl;
cout<<power(2,5);
  return 0;
}*/ 

#include<iostream>
#include<string>
using namespace std;  
void RemoveDuplicates( string s, string newstring, int index ){ 
  //base case 
  if(index==s.length()){
  cout<<newstring;
  return;} 
string s1=substr();
  

}
int main(){ 
  return 0;
}


