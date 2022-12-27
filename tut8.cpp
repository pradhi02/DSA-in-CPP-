#include<iostream>
using namespace std;
int main(){
    //cout<<"<<cout"; 
    //int i=0; 
    for (int i = 0; i < 12; i++)
    { 
        if (i==10)
        {
            continue; 

        }  
        else
        {
            break;
        }
        
        
        cout<<i<<endl;
    }
    






     return 0;
}
 //break and continue statements'
 // break; completely loop se exit kra deti hai! which means it completely terminates the loop; 
 //continue- continue me ek particular case ko skip krke the loop goes on till the end! 