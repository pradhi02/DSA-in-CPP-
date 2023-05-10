/*#include<iostream>
using namespace std;
int main(){ 
   // int n=5;
    //cout<<5;
/*cout<<endl;
cout<<addressof(n); 
cout<<&n;
int *ptr=&n;
cout<<n;
cout<<endl;
cout<<ptr;//only address will get printed as only address is stored in ptr
cout<<*ptr;//this will print the varible value jisko ye pointer point kr rhaha hai
 double d=7.88;
 double *p=&d;
 cout<<p;
 cout<<*p; 
 cout<<sizeof(d);
 cout<<sizeof(*p);*/ 

 /*int *p;//this will point to some garbadge value in the memory 
 cout<<*p;*/  
 /*int i=9;
 int *p=0; 
 p=&i;
 cout<<*p; 
 */  //this will give sigmentation fault as we are trying to access a pointer jo null value ko point kr rha hai  
 /* int num=5;
  int a=num; 
  //num++;
  cout<<num<<a<<endl;
  int *p=&num;
  cout<<num<<endl;
  (*p)++; //pointer increment krnega the vale jiske address usme stored hai  
  //cpoying pointer 
  int *q=p;
  cout<<p<<endl<<q;
  cout<<*p<<*q;
 // cout<<num<<endl; 

 //pointer artitematic 
 

int i=9;
int *pt=&i;  
cout<<*pt; 
cout<<endl;
(*pt)++;
cout<<i;  
cout<<endl;
cout<<pt; 

cout<<endl; 
cout<<endl;
pt=pt+1; //ye 1 memory se aagr ni ajyega ye direct 4 bytes aage chala jayega mtlb ye direct new location pr chala jayega 
cout<<pt;

    return 0;
}*/ 

#include<iostream>
using namespace std;
int main(){ 
    /*int arr[10]={2,5,6}; 
    cout<<"address of first block of array is"<<arr; 
    cout<<endl;
    cout<<"address of arr2 is"<<&arr[2];  
    cout<<endl;  
    cout<<*arr; cout<<endl;
    cout<<"5th"<<*arr + 1 ; //yaha first location ki value me +1 ho rha ahai 

    cout<<*(arr+1); //yaha combine lekr chal rhai hai mtkb *(arr+1) pr situated value print kro   


    //cout<<*arr+4; */ 

   /* int arr[10]={23,122,41,67};
    cout<<arr[2];  
    cout<<endl;
    cout<<*(arr+2);  
    int i =3;
    cout<<i[arr];  cout<<endl;
    cout<<*(arr+1); */

    /*int temp[10]={1,2,3}; 
    int *ptr=&temp[0];
    cout<<sizeof(temp); cout<<endl;
    cout<<*temp;   //value at first  
    cout<<sizeof(*temp);   //size of value at first index; 
    cout<<endl; 
    cout<<&temp; cout<<endl; //address of temp; 
    cout<<sizeof(&temp)<<endl; //size of address of temp - temp is the adress of firstt block of the array 
    cout<<sizeof(ptr); //size of pointer 
    cout<<sizeof(*ptr); //size of value stored at pointer 
    cout<<sizeof(&ptr);  //size of address of the value stored at ptr */ 

   /* int a[20]={1,2,3,4,5}; 
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<&a[0]<<endl;  

    int *ptr= &a[0];  
   cout<<ptr; cout<<endl;
    cout<<*ptr; cout<<endl;
    cout<<&ptr; */  

    /*int arr[10];
    int *ptr=&arr[0];  
    cout<<ptr; cout<<endl;
    ptr=ptr+1; //yaha pr address 4 bye se aagr badh jayega which means necxt block me chale jaynege hum  
   // arrl;
    cout<<ptr; cout<<endl;
    cout<<arr[0]+1;  cout<<endl;
    cout<<&arr[0];*/ 

    int arr[3]={1,2,3}; 
    int *ptr=&arr[0];
    char ch[4]={"abc"};  
    char *c=&ch[0];
    cout<<arr;cout<<endl; //ye print krega first block k address
    cout<<ptr;cout<<endl;//ye print krnega address
    cout<<c;cout<<endl; //ye puri string print kr dega until null charactder 
    cout<<*c<<endl;//ye sirf first chaer dega 
    
    cout<<ch;//ye bhi puri string dega 



    return 0;
}