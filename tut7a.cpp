 /*#include<iostream>
using namespace std; 
int fib(int n){ 
  if(n<=2){return 1;}
   else{return fib(n-1)+fib(n-2);}
  } 

  
int main(){
  int a;  
  auto n=12;
  //cout<<"enter the value of n"<<endl;
  //cin>>a;
  //cout<<"the fib of a is"<<fib(a)<<endl; 
  cout<<n;


 
  return 0;
} 


#include<iostream>
#include<string> 
using namespace std; 
int main(){
string s = 'hlll '; 
cout<<s; 
   return 0;
} 
*/


/*#include <iostream>
using namespace std; 
int main ( ) 

{
 

  int inipass ; 
  int empty_seats;  
  int pass_left; 
  
  cin>>inipass; 
  pass_left = inipass % 50 ; 
  empty_seats=50-pass_left; 
  cout<<empty_seats; 
  
return 0; 
} */


/*#include<iostream> 
#include<string>
using namespace std; 
int main(){  

  string str = "pradhiforpradhi"; 

  getline(cin,str);
  cout<<"the string is"<<str<<endl;
  str.push_back('s');
  cout<<"the new string is"<<str<<endl;
  str.pop_back();
  cout<<"the new string is "<<str<<str;

return 0; 
} */ 



// C++ Program to demonstrate the working of
// getline(), push_back() and pop_back()
/*#include <iostream>
#include <string> // for string class
using namespace std;*/

/*// Driver Code
int main()
{
	// Declaring string
	string str;

	// Taking string input using getline()
	getline(cin, str);

	// Displaying string
	cout << "The initial string is : ";
	cout << str << endl;

	// Inserting a character
	str.push_back('s');

	// Displaying string
	cout << "The string after push_back operation is : ";
	cout << str << endl;

	// Deleting a character
	str.pop_back();

	// Displaying string
	cout << "The string after pop_back operation is : ";
	cout << str << endl;

	return 0;
}
*/ 

#include<iostream>
#include<string>
using namespace std; 
int main(){ 
  cout<<"enter a string ";
  string s;  
  getline(cin,s);
  cout<<s;
  return 0;
}


 


 
 


