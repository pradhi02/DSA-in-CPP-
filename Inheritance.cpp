//single level inheritance example
/*#include<iostream>
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
} */ 

//multilevel inheritance  
/*
#include<iostream>
using namespace std; 
class Animal{ 
    public: 
    int age;
    int health; 
    int height;
    int GetAge(){
        return this->age;
    }
}; 

class dog:public Animal{  
    
    int weight;

}; 

class germanshephard: public dog {  
    int size;

};
int main(){   
 germanshephard m ;
 cout<<m.height;cout<<endl;
 cout<<m.health; cout<<endl;

 dog moti ; 
 cout<<moti.GetAge();cout<<endl;
    

    
    return 0;
}*/  


//multiple inheritance 
//basicall more than one super class  
/*
#include<iostream>
using namespace std; 
class Human {  
    public:
    int age;
    int weight; 
    
    void Theyspeak(){
        cout<<"they speak"<<endl;
    } 

}; 

class Animal{
    public:
    int life;
    int size; 
    void Theylife(){
        cout<<"animal's life span is shorte than humans"<<endl;
    }
}; 

class man: public Human , public Animal {
 public:
 void inhertance(){
    cout<<"if this code works fine then boom multiple inheritance hogyeeeeeee we implemeneted "<<endl;
 }
}; 
int main(){  

    man a;
    a.Theylife();
   // a.Theylife();
    cout<<a.age;
    cout<<a.life;
    a.inhertance();
     

    return 0;
} */ 

#include<iostream>
using namespace std; 
class a{
    public:
    int dob;

}; 

class a1:public a { 
    public: 
    int age;
} ;

class a2:public a{ 
    public:
    int time;
};
int main(){ 
 a1 p;
 a2 s;
  cout<<p.age<<endl;
  cout<<s.dob<<endl;
  cout<<p.dob<<endl;
  cout<<s.time<<endl;
    return 0;
}



