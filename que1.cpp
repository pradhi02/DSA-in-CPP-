/*#include<iostream>
#include<string>
using namespace std; 
 class student { 
    public:  
    string name;  
    int roll_no; 
    string student_address; 

     };
int main(){ 
 student s; 
 s.name= "john"; 
 s.roll_no= 2; 
 s.student_address="Sicilly street, mary town";  
  student J; 
  J.name="john";
  J.roll_no= 12; 
  J.student_address="townhall, oincallo";

  
  
cout<<"the name of the student is"<<s.name<<"the roll number of student is"<<s.roll_no<<"and address is "<<s.student_address; 
cout<<"the name of the student is"<<J.name<<"the roll number of student is"<<J.roll_no<<"and adress is"<<J.student_address;
    return 0; 
} 

/* 
 

 /*#include<iostream>
using namespace std;  
class Triangle{ 
   public:
    void  triangle_area(int s1, int s2, int s3) ;
    
    /*float triangle_area(int base , int height){
   float A ; 
    A = 0.5 * base * height  ; 
   return A;

}; 
void  Triangle :: triangle_area(int s1, int s2 , int s3){
  
  double S=(s1 + s2+ s3)/2;
  cout<<S<<endl;  
  cout<<"Perimeter"<<(s1+s2+s3)<<endl; 

}
int main(){ 
   Triangle t; 
   t.triangle_area(3,4,5); 
   return 0; 
}
     */ 



/*#include<iostream>
using namespace std ; 
int main(){ 
 int students[10]={12,2333,2332,221, 322, 332,9832,123,876,988  } ;
 //cout<<students[2]; 
  for (int i = 0; i < 10; i++)
  {
    cout<<students[i]<<endl;
  }
  


   return 0 ; 
}
*/ 
 /*#include<iostream>
using namespace std;
int main() {  
   int number[6];
 
 cout<<"enter the number"<<endl; 
 for (int i = 0; i < 6; i++)
 {
   cin>>number[i];
 } 
 cout<<"the numbers entered are"<<endl; 
  for (int j = 0; j < 6; j++)
  {
   cout<<number[j]<<endl;
  }
  
 


   return 0;
} 
*/ 


#include<iostream>
using namespace std;
int main(){ 
   int num[]={12,18,63,73,10};
  int  n=sizeof(num);
  int sum=0; 
   cout<<"THE SUM OF ALL ELEMENTS OF ARRAY IS";
   for (int i = 0; i < n; i++)
        
   {
        sum += num[i];
       cout<<sum;
   }
   




   return 0;
}



