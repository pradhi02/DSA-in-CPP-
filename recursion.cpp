/*#include<iostream>
using namespace std;
int getFactorial(int n){ 
    //base case
    if(n==0){ 
        return 1;  } 

    int ans = n*getFactorial(n-1); 
    return ans;
}
int main(){
    cout<<getFactorial(6)<<endl; 
    cout<<getFactorial(4)<<endl; 
     
    return 0;
}*/ 

/*#include<iostream>
using namespace std; 
int exponent(int n){
    //base case 
    if(n==0){
        return 1;
    }  
    //recursive relation 
    int smallerproblem =exponent(n-1);
    int biggerproblem= 2*smallerproblem;
    return biggerproblem;
}
int main(){   
    cout<<exponent(4)<<endl;
    cout<<exponent(10)<<endl;

    return 0;
} */ 
 
/*#include<iostream>
using namespace std;  
void printCount(int n){
//base case
if(n==0){
    return ;
} 
//procressing statatement 
cout<<n; 
cout<<endl;   //tail recursion sinc the recurring relation is at last 
//recurring statamenet 
printCount(n-1);
}  
 
 //2ND FUNCTION  
void printCount2(int n){
//base case
if(n==0){
    return ;
} 

  //head recursion sinc the recurring relation is at first  
//recurring statamenet 
printCount2(n-1);  

cout<<n<<endl; 

}



int main(){  
    
   printCount(5); 
cout<<endl;
    cout<<endl;
    printCount2(7);

    return 0;
} */ 

#include<iostream>
using namespace std; 
int fibonacciSeries(int n){
    //base case 
    if(n==0){
        return 0;
    } else if(n==1){return 1;} 

    fibonacciSeries(n)=fibonacciSeries(n-1)+fibonacciSeries(n-2); 
    
}
int main(){ 

    return 0;
}

