#include <iostream>
using namespace std;
class shop
{
   int itemId[100];
   int intemPrice[100];
   int counter=0;

public:
   //void initcounter(void){counter = 0};
   void getprice(void);
   void displayprice(void);
}; 
void shop :: displayprice(void){

   cout<<"Enter the item Id"<<endl;
   cin>>itemId[counter]<<endl;
   counter++: 

}  
void shop :: displayprice(void){
for (int i = 0; i < counter; i++) {

   cout<<"The price of Item with ID"<<itemId[i+1]<<"is"<<intemPrice[i];
 
}}  

int main()
{  
   shop dukaan;
   //dukaan.counter();
   dukaan.getprice();
   dukaan.getprice();
   dukaan.getprice(); 
   dukaan.displayprice();

   return 0; 
}