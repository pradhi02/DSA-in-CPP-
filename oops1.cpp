/*#include<iostream>
using namespace std; 
class Hero   {  
    private : 
    int health; 

//properties
 public:   

 char level; 

 // default constructor
  Hero(){
    cout<<"constrcutor called";
  }  

  //parameterized contructor 
   Hero( int health){
    this->health=health;
   } 
   //copy constructor 
   Hero(int health, char level){
        this->health=health;
        this->level=level;
   } 

   void print(){ 
    
    cout<<"the heath is"<<this->health<<endl;
    cout<<"the level is"<<this->level<<endl;
   } 

   //copy constructor 
   Hero (Hero &temp){ //agar ampersand ni lagayenge to pass by value hoga and pass by value me copy creat hogi and constructor ko copy krne k liye copy contructor call hoga and again chopy creat hogi which means ki ye infinite loop me fas jayengi hence we need to use ampersan///  
   cout<<"copy constrcutor called ";
    this->health=temp.health;
    this->level=temp.level;
   }

int getHealth(){
    return health;
} 
void setheath(int n){1fvn    58irr 
    health=n;
    } 


};

int main(){   
    Hero P;
    Hero Ramesh(60,'A'); //created statically 
      Ramesh.print();
    Hero *h1 = new Hero; //created dynamically  

    Hero pink(Ramesh); 
    pink.print();

    

    
   /* Hero H1;  
     Hero *H2= new Hero;
    cout<<"the heath if H1 is"<<H1.getHealth()<<endl; 
    H1.setheath(20); 
    cout<<"the heath if H1 is"<<H1.getHealth()<<endl;
    
        H1.level=5;
    cout<<"the size of hi is "<<sizeof(H1)<<endl ;  
    cout<<"let us see the public properties of the class , health "<<H1.health<<endl;
    cout<<"let us see the public properties of the class, level"<<H1.level<<endl;
    cout<<"hellooo pradhiii "; 
    cout<<"the size of hero 2 is "<<sizeof(*H2);  
    (*H2).setheath(60);
    cout<<"the heath of hero 2 is "<<(*H2).getHealth();

    H2->setheath(70);
    cout<<"the value of health of hero 2 is "<<H2->getHealth(); 
     

     
       return 0;
} */ 
 
 /*#include<iostream>
 #include<string>
 using namespace std; 
 class Animal {  
  //privateb data memebers  
  int age;
  int size;  
  //public data members 
public:  

  string name; 
  char div;   
//constrcutor creation 
n//ame=new char[100]; 
Animal(){
  cout<<"constrcutor called"<<endl;
}  

//parameterised constrcutors 
Animal(string name, char div){
  //over here i will use this keyword  
  cout<<"the present obj address is "<<this<<endl;
  this->name=name;
  this->div=div;
} 

//apna copy constructor bhai log 
Animal ( Animal &temp){ 
 
  cout<<"copy constructor called"<<endl;
  this->name=temp.name;
  this->div=temp.div;
} 

  void SetAge(int a){ 
    age=a;
} 

int GetAge(){
  return age;
} 

void SetSize(int n){
  size=n;
} 

int GetSize(){
  return size;
}
};
 int main(){   
  /*Animal cat; 
  cat.name="kitty"; 
  cat.div='A'; 
  cat.SetAge(4);
  cat.SetSize(10); 
  cout<<"the naeme of cat is "<<cat.name<<endl;
  cout<<"the size of cat is "<<cat.GetSize()<<endl;
  cout<<"the age of cat is "<<cat.GetAge()<<endl;
  cout<<"the div of cat is "<<cat.div<<endl;
 

 Animal *dog= new Animal; 
 (*dog).name="rio";
 cout<<"the name of dog is "<<(*dog).name<<endl;  
  dog->SetAge(7);
  dog->SetSize(5); 

  cout<<"the age of dog is "<<(*dog).GetAge()<<endl;
  cout<<"the size of dog is "<<(*dog).GetSize()<<endl;*/ 

/*Animal cat("kitty",'a'); 
cout<<"the addressm of cat is "<<&cat<<endl;
 
 Animal *pig= new Animal("piggy",'d');
 cout<<"the name of pig is"<<(*pig).name<<endl;
 cout<<"the name of pig is"<<(*pig).div<<endl;
  //cout<<"hello world";  

  Animal man(cat);  
  cout<<"the age of man is"<<man.GetAge();cout<<endl;
  cout<<"the name of man is "<<man.name;cout<<endl;
  cout<<"the div  of man is"<<man.div;cout<<endl;

  Animal dog("moti", 'x'); 
  cout<<"the name of dog is "<<dog.name<<"and the division is"<<dog.div<<endl; 

  dog.name="ro";
  
  Animal cat(dog); 
  cout<<dog.name<<endl;
  cout<<"the name of cat is "<<cat.name<<"and the division is"<<cat.div<<endl;


  return 0; 

 }*/  

 #include<iostream>
 #include<cstring>
 using namespace std; 
 class hero{ 

  public:
  char *name;  
   
  int age;   
//default constrcutor 
hero(){
  cout<<"simple constructor called"; 
  name=new char[100];
} 
 void setname(char name[]){
  this->name=name;
 }  

 //for deep copy we need our own copy constructor 
 hero ( hero &temp){
  cout<<"copy constructor called"<<endl; 
  char *ch=new char[strlen(temp.name)+1];
  strcpy(ch,temp.name);
  this->name=ch;
 //  this->name=temp.name;
  this->age=temp.age;
 }

  


 };
 int main(){  
  hero ram; 
  char name[10]="pradhi";
  ram.age=12; 

  ram.setname(name);
  cout<<"the name of ram is"<<ram.name<<endl; 
  hero yolo(ram); 
  name[0]='g';
  cout<<yolo.name<<endl;
  cout<<ram.name;
  
  
  cout<<"the age of ram is "<<ram.age<<endl;

  
  return 0;
 }





