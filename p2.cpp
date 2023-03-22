/*#include<iostream>
using namespace std; 
int countOdds(int low, int high) {  
    int count;
    int i;
        while (low<=i<=high)
        { count=0;
      if ((i/2)==0)
      {
        count++;
      }
      
        }
        
      return count;
        
    }
int main(){  
    int a=3,b=7;
    cout<<countOdds(3,7);

    return 0;
}*/

/*#include<iostream>
#include<vector>
using namespace std;
int signfunc(vector<int>v){
  int ans=1;
  for(int i=0;i<v.size();i++){
    ans=ans*v[i];
  } 
  if(ans>0) return 1;
  else if(ans<0) return -1;
  else return 0;
}
int main(){  
  vector<int>v;
  v.push_back(2);
  v.push_back(-2);
  v.push_back(-2);
  v.push_back(-2);
  v.push_back(2); 
  int temp=signfunc(v);
  cout<<temp;


  return 0;
}*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool ap(vector<int>v){ 
  sort(v.begin(),v.end());
  for (int i = 0; i < v.size(); i++)
  {
    int cd=(v[i+1]-v[i]);
    for
  }
  
}
int main(){ 

  return 0;
}