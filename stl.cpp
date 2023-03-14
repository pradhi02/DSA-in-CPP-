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
 
 //DEQUE
/* #include<iostream>
#include<deque>
using namespace std;  
int main(){ 
    deque<int>d;
    d.push_back(1);
    d.push_front(2);
    d.push_back(3);
    d.push_back(7);
    d.push_back(9);
    for(int i:d){ 
        cout<<i<<endl;
    }  
    /*d.pop_back(); 
    for(int i:d){
        cout<<i<<" "; 
    }
    cout<<"element at front is"<<d.front()<<endl;
    cout<<"element at front is"<<d.back()<<endl;    
    ///cout<<d.begin(); 
    d.erase(d.begin(),d.begin()+1);
    for(int i:d){
        cout<<i<<endl; 
    }
    
    return 0;
}*/ 

//LIST
/*#include<iostream> 
#include<list>
using namespace std;
int main(){ 
    list<int>l;
    l.push_front(3);
    l.push_front(6);
    l.push_front(9);
    l.push_back(3);  
    l.pop_front();
    for(int i:l){
        cout<<i;
    } 
    l.erase(l.begin());
    cout<<"after erase";
    for(int i:l){
        cout<<i;
    } 
    cout<<"size of the list is"<<l.size()<<endl; 

    list<int>n(5,100);
    for(int i:n){
        cout<<i<<endl;
    }
    
    return 0;
} 
*/ 
//STACK
/*#include<iostream> 
#include<stack>
using namespace std;
int main(){  
    stack<string>s;
    s.push("hi");
    s.push("helloo"); //sbse phele hi gaya fir helloo fir hola//
    s.push("hola");
    cout<<"top element"<<s.top()<<endl;
    s.pop();

    cout<<"top elemenmt"<<s.top()<<endl; 
    cout<<s.size();
    cout<<s.empty();
    return 0; 
} */ 

//QUEUE
/*#include<iostream>
#include<queue>
using namespace std; 

int main(){ 
    queue<string>q; 
    q.push("helloo");
    q.push("hi");
    q.push("byebye");   
    cout<<q.size(); //before pop
   cout<<q.front(); 
   q.pop();
   cout<<q.front();  
   cout<<q.size(); //afterpop
    
   
    return 0;
} */

//PRIORITY QUEUE
/*#include<iostream>
#include<queue>
using namespace std;
int main(){  
    //max heap
    priority_queue<int>maxi;
    //min heap
    priority_queue<int,vector<int>,greater<int>>mini;
   maxi.push(7);
   maxi.push(5);
   maxi.push(1);
   maxi.push(2); 
   cout<<maxi.size()<<endl;
   cout<<maxi.top()<<endl;  
   int n=maxi.size();
   for (int i = 0; i <n; i++)
   {
    cout<<maxi.top()<<endl; 
    maxi.pop();
   } 
    
   mini.push(33);
   mini.push(44);
   mini.push(12);
   mini.push(23); 
   cout<<mini.size()<<endl;
   cout<<mini.top()<<endl;  
   int j=mini.size();
   for (int i = 0; i<j; i++)
   {
    cout<<mini.top()<<endl; 
    mini.pop();
   }  

   cout<<"hiiii";
   
    

    return 0;
} */ 
 

 //SET 
/*#include<iostream> 
#include<set>
using namespace std;
int main(){
    set<int>s;
    s.insert(8);
    s.insert(5);
    s.insert(4);
    s.insert(3);
    s.insert(3);
    s.insert(3); //even if 3 3 times hai set k andar 1 time ayega
    for(int i:s){ 
        cout<<i<<" ";
    } 
    s.erase(s.begin()); 
    for(int i:s){ 
        cout<<i<<" ";
    } 
    cout<<"is present of not"<<s.count(5); 
     

    return 0;
}*/


#include<iostream>
#include<map>
using namespace std;
int main(){ 
    map<int,string>m;
    m[1]="riya"; 
    m[2]="jiya";
    m[3]="piya"; 
    m.insert({5,"bheem"}); 
   for(auto i:m){
    cout<<i.first<<endl;
   } 
   cout<<"finding 5 in the map"<<m.count(-5); 
   cout<<"before erase"<<endl;
   for(auto i:m){
    cout<<i.first<<endl;
   } 
   m.erase(5); //erase 5 from the map 
   //time complexity is o(N);

   for(auto i:m){
    cout<<i.first<<endl;
   }
    return 0;
}