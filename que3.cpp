/*#include <iostream>
using namespace std;
int main()
{

    int a, b, c;

    cout << "Enter three numbers" << endl;
    cin >> a, b, c;
    if (a > b)
    {
        if (a > c)
        {
            cout << a<<endl;
        }

        else
        {
            cout << c<<endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << b << endl;
        }
        else
        {
            cout << c << endl;
        }
    }

    return 0;
} 
*/ 


/*
#include<iostream>
using namespace std; 
int main(){  
    int a ; 
    cout<<"enter the number to be checked"<<endl;
    cin>>a;
    if (a%2==0)
    {
        cout<<"number is even"<<endl;
    } 
    else{
        cout<<"number is odd"<<endl;
    }
    
    return 0; 
} */ 

/*#include<iostream>
using namespace std; 
int main(){ 
 int side1;
 int side2;
 int side3; 

 cout<<"Enter the three side of the triangle."<<endl; 
 cin>>side1>>side2>>side3; 
 if (side1==side2 && side2==side3)
 {
    cout<<"the trinagle is equilateral triangle"<<endl;
 }
 else if (side1==side2 || side2==side3 || side3==side1)
 {
    cout<<"the trinagle is isosceles triangle"<<endl;
 }
  else{
    cout<<"the triangle is scalene trinagle "<<endl; 
  }
 

    return 0;
}

*/  
#include<iostream>
using namespace std; 
int main(){  

   // char lowercasevowel;
    //char uppercasevowel;  
    char c;
    cout<<"enter the character you want to check"<<endl; 
    cin>>c; 

    if (c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u')
    {
        cout<<"the character entered is lowercase vowel "<<endl;
    } 
    else if(c=='A'|| c=='E' || c=='I' || c=='O' || c=='U'){
        cout<<"The character entred is uppercase vowel "<<endl;
    }
     else {
        cout<<"the character is a consonant"<<endl; 
     }



    return 0; 
}
