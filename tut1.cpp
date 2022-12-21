#include<iostream>
using namespace std; 
int glo=2; //over here we have declared a global variable outside the main function
 void sum(){
cout<<glo;
}
int main() { 
    bool a=true;
int no_of_books=12;

    cout<<"\nthere are" <<no_of_books;
   
    int glo=100;//this is local variable and it always precedes the global variable
    glo=90; 
    sum();
    cout<<glo;
    //cout<<"there are total "<<no_of_books;
    cout<<a;
//cout<<"this is tutorial 4.\nHere the value of a is "<<a<< "\nThe value of b is  "<<b;
//cout<<"\n The value of pi is"<<pi;
///cout<<"\nthe character i have entered is "<<c;
//cout<<"\nthe value of double entered is  "<<d;
cout<<"\n print variable" <<glo;
 



return 0; 

}
