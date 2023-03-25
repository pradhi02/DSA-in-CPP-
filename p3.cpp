/*#include <iostream>
#include<string>
using namespace std; 
//counting the maximum occuring element 


char getMaxOcccharacter(string s){
 int arr[26]={0}; 

 //create an array of count of character

 for(int i=0;i<s.length();i++){
    int ch=s[i];
    //lowercase 
    int number=0;
    number=ch-'a';
    arr[number]++;

 } 
 //find maximum occuring char 
 int maxi=-1; int ans=0; 
 for (int i = 0; i <26; i++)
 {
 if(maxi<max(maxi,arr[i])){
  ans=i;
  maxi=arr[i];
 } 
 }
return 'a'+ans;

}  
//time complexity o(n);
//since one loop is running n times and other has constant time complexity;
int main() 
{
   string s;
   cin>>s;
   cout<<getMaxOcccharacter(s)<<endl;

   return 0;
}*/  

  
/*#include <iostream>
#include <string>
using namespace std;
  
int main()
{
    string str;
  
    //cout << "Please enter your name: \n";
    getline(cin, str);
    cout  << str; 
   /* const char delim='*';
    getline(cin, str,delim);
    cout<<str.length();
  
    return 0;
}*/  

/*#include<iostream>
#include<string>
using namespace std;
int main(){ 
    string s1;
    string s2;
    getline(cin,s1);
    getline(cin,s2);
    cout<<"the length of the first string is"<<s1.length()<<"the length of s2 is"<<s2.length();
    

    
    
    return 0;
}
*/ 

  
  //removing spaces and addding @40 que
  /*#include<iostream>
  #include<string> 
   using namespace std; 
  string insertchar(string s){
    string temp=""; 
    for(int i=0;i<s.length();i++){
    if(s[i]==' ') {
    temp.push_back('@'); 
    temp.push_back('4'); 
    temp.push_back('0'); 
    //temp.pushback('@'); 
    }   
    else {
        temp.push_back(s[i]);
    }
  } 
  return temp;}
 
  int main(){ 
    string s='my name king';
    
    insertchar(s); 
    cout<<s; 
    
    
    //cout<<s;
   



    
    return 0;
  }*/ 


#include<iostrea>
using namespace std;
int main(){
  
}

