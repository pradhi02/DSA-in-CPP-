#include<iostream>
#include<algorithm>
#include<vector> 
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    cout<<"finding 5 in the"<<binary_search(v.begin(),v.end(),6)<<endl; 
    cout<<"upper bound is"<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;
     cout<<"lower bound is"<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl; 
      int a=12;
      int b=3;
      cout<<max(a,b)<<endl;
      cout<<min(a,b)<<endl; 
      swap(a,b);
      cout<<endl;
      cout<<a; //a's value is swaped with b
      string s="abcbd";
      reverse(s.begin(),s.end());
      cout<<s; 

      rotate(v.begin(),v.begin()+1,v.end());
for(int i:v){
    cout<<i;
} 
cout<<endl;
sort(v.begin(),v.end());
for(int i:v){
    cout<<i;
}
    return 0;
} 