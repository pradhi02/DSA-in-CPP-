/*#include<iostream>
using namespace std;
int main(){

    int num; int check=0;
    cout<<"Enter the value of num"<<endl;
    cin>>num;
     for ( int i = 1; i <= num; i++)
     {
       if(num%i==0){
        check++;
       }

       if (check==0)
       {

        cout<<"the number is prime"<<endl;
       }
       else{cout<<"the number is not prime";}

     }


    return 0;
} */

/*#include<iostream>
using namespace std;
int main(){

 int savings;
 cout<<"enter the saving of the day "<<endl;
cin>>savings;
if (savings>5000)
{  if (savings>10000)
{
 cout<<"will go on a trip"<<endl;
} else{
 cout<<"will go to shopping"<<endl;
}

 /cout<<"will take lV"<<endl;
} else if (savings>2000){
 cout<<"will take Mk"<<endl;
}
else{cout<<"willl go with dost"<<endl;
}
 return 0;
} */
 



 #include<iostream>
 using namespace std; 
 int main(){ 
 
 int age; 
 cout<<"enter your age"<<endl; 
 cin>>age; 
  
  switch (age)
  {
  case 18:
    cout<<"you  are allowed for the halloween party"<<endl; 
    break; 
    case 12:
    cout<<"not allpwed for the "; 
  default: 
  cout<<"looking forword"; 
    break;
  } 




  return 0; 
 } 