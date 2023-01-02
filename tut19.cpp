
 
 //oops - c;asess and objects 

// 1) c++--> was initially called clasess by stroustroup 
// 2) clasess are nothing but extension of structures from c
//structures had limitations--> example-members are public , no methods can be included in structures. 
 //clasess -->structures + more
//clasess can have methods and properties
// clasess -->can make few members as private a few as public 
//structure in cpp are alrdy trypedefed-
// you can declare object along with the class declaration  
//if harry.salary=8 makes no sence if salary is private 


/* nesting of memebers functions*/
   
   /*class binary {

    string s; 
    public: 
    void read(void);
    void chk_bin(void); 
        
   }; 
   void binary:: read(void){
    cout<<"enter a binary number";
    cin>>s;  
   }  

   void binary:: chk_bin(void){
   for (int i =0 ; i<s.length(); i++) {
      if (s.at(i)!='0' && s.at(i)!='1'){
         cout<<"incorrect binary format"<<endl;
         exit(0); 
      }
   }

   }
   int main(){ 
      binary b ; 
      b.read();
      b.chk_bin();
      
    
    return 0; 
   } */  



   #include<iostream>
   using namespace std; 
   class shopping
   {
   private:
       int x;  //rate 
   public: 
       void enter_rate(void);
       int item_number( void);
       void display_quality(void);

   };  

   void shopping::enter_rate(void){ 
      cout<<"Enter the rate of the items"<<endl; 
      cin>>x; 
}
    
    int shopping::item_number(void){
     int a; 
       if (x%5==0)
           { a=0; 
           return (a) ;}
          else{
             a=x%5; 
             return (a); 
          }
} 

    void shopping::display_quality(void){

        cout<<"the rate of the poduct acorindg to the quality "<<item_number()<<endl; 
    }
        

    
   int main(){ 
             

      shopping pradhi; 
      pradhi.enter_rate();
      pradhi.display_quality();
      return 0; 
   



      return 0 ; 
   }