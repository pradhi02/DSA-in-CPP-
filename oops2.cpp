//inheritance implementation 
/*#include<iostream>
using namespace std; 
class Human  {  
    public:
 string name; 

 int age; 

 private:
 int height; 

 public: 

 void SetName(string n){
    this->name=n;
 } 
 string GetName(){
    return this->name;
 }  
 void SetAge(int a){
    this->age=a;
 } 
  int GetAge(){
    return this->age;
 }  

 void SetHeight(int h){
    this->height=h;
 } 
 int  GetHeight(){
    return this->height;
 } 



}; 


class Man: private Human{ 
    public:
    int health; 
    char sex;  

    void getheight() {
      cout<<"height is"<<height;
    }


    void print(){
        cout<<"man is the sub class and is running successfully"; cout<<endl;
    }

};
int main(){ 
cout<<"helloo pradhi"; cout<<endl; 
 Man ram;  

 //cout<<ram.height; 
 ram.getheight(); 
 ram.height;
 
 
 /*ram.print();
 ram.SetAge(12);
 ram.SetName("kiddo");
 ram.SetHeight(164); 
 cout<<"the name of ram is " <<ram.GetName()<< " the height of ram is" <<ram.GetHeight()<< " and his age is " <<ram.GetAge()<<endl;
 

    return 0;
} */  

//single level inheritance example
#include<iostream>
using namespace std;
class Animal { 
   public: 
   int height;
   int weight; 

   void speak(){cout<<"speak" ; }
};  
class dog:public Animal{}; //single level inheritance 
int main(){  
   dog moti; 
   moti.speak();
   cout<<moti.height;
   cout<<moti.weight;

   return 0;
} 