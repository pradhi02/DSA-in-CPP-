 /* ARRAY
  #include<iostream>
 #include<array>
 using namespace std;
 int main(){ 
    array<int,6>a={1,2,3,4,5,6};
    cout<<a.size()<<endl;
    for (int i = 0; i<6; i++)
    {
         cout<<a[i]<<endl;
    }
    cout<<"second element is"<<a.at(2)<<endl;

    return 0;
 }*/  
 

/* VECTOR 
#include<iostream>
#include<vector>
using namespace std;
int main(){  
    vector<int>v; //initially the capacity of vector remains zero when no elements is present
   cout<<"the capacity of the vector is"<<v.capacity()<<endl; 
   vector<int>A(5,1);
   for(int i:A) {
    cout<<i<<" ";
   }  
   vector<int>last(A);
   for(int i: last){
    cout<<i<<" ";
   }
   
   
   v.push_back(1);
   v.push_back(2);
   v.push_back(4); 
   cout<<v.size()<<endl;
   cout<<v.capacity()<<endl ; 
   cout<<"the element at second index is "<<v.at(2)<<endl;
   cout<<"the front element of the vector is "<<v.front()<<endl;
   cout<<"the front element of the vector is "<<v.back()<<endl;
   v.pop_back();
    for(int i:v){
        cout<<i<<" "; 
    } 
    cout<<"before clear the size of vector is "<<v.size()<<endl;
    v.clear();
    cout<<"before clear the size of vector is "<<v.size()<<endl;
    
    return 0;
}*/

#include<iostream>
#include<deque>
using namespace std;  
int main(){ 
    deque<int>d;
    d.push_back(1);
    d.push_front(2);
    for(int i:d){
        cout<<i<<endl;
    } 
    return 0;
}

