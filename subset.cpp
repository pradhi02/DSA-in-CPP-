#include<iostream> 
#include<vector>
using namespace std;  

void solve (vector<int>nums, vector<int>output,int index,vector<vector<int>> &ans){ 
//base case 
if(index>=nums.size()){ 

    ans.push_back(output);

    return;
} 

//exclude call k liye we will increment the index kyuki elemenet exclude hoga 

solve(nums,output,index+1,ans); 

//ab include krne k liye call ayega toh 
int element=nums[index]; 
output.push_back(element); 
solve(nums,output,index+1,ans); 

} 


vector<vector<int>> subSets(vector<int> &nums){
    vector<vector<int>>ans; 
    vector<int>output;
    int index=0; 

    solve(nums,output,index,ans);  
    return ans; 
}

int main(){ 
 vector<int> set = {1,2,3}; 

 vector<vector<int>>ans = solve(set); 

 cout<<ans;
    cout<<"hi helllo all goood "<<endl; 
    return 0;
}