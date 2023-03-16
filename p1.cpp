/*#include<iostream>
#include<vector>
using namespace std; 
vector<int> reverse(vector<int>v){
    int s=0,e=v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    } 
    return v;
} 
void print(vector<int>v){
    for (int i = 0; i <v.size(); i++)
    {
        cout<<v[i];
    }
    
 }
int main(){
 vector<int>v;
 v.push_back(3);
 v.push_back(8);
 v.push_back(6);
 v.push_back(7);

 vector<int>ans=reverse(v);
 print(ans);
 
 
 
 



    return 0; 

}*/ 

//REVERSE AN ARRAY
/*#include<iostream>
#include<vector>
using namespace std; 
vector<int>reverse(vector<int>v,int m){
int s=m; int e=v.size()-1;
while(s<=e){
swap(v[s],v[e]);
s++;
e--;
}
return v;
}  

void print (vector<int>v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    
} 

int main(){ 
    vector<int>p;
    p.push_back(4);
    p.push_back(33); 
    p.push_back(86);
    p.push_back(99);
    p.push_back(476); 
    vector<int>ans=reverse(p,2);
    print(ans);
    return 0;
} */ 

#include<iostream>
#include<vector>
using namespace std; 
void merge(int arr1[],int n,int arr2[],int m, int arr3[]){
    int i=0,j=0;
    int k=0;//3rd array k size 
    while(i<n && j<m){
        if (arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i]; 
            k++;
            i++;
        }
        else{
            arr3[k]=arr2[j];
            k++;
            j++;
        } 
    }  //cpying if elements are remaining in arr1
    while(i<n){
        arr3[k]=arr1[i];
        k++;
        i++;

    }  //copying if elememts are remaining on arr2
    while(j<n){
        arr3[k]=arr1[j];
        k++;
        j++;
        
    } 
} 

void print(int arr[],int n ){
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    } 
    cout<<endl;
    
}

int main(){ 
 int array1[5]={1,5,7,8,10};
 int array2[3]={3,5,7};
 int array3[8]={0};
 merge(array1,5,array2,3,array3);
 print(array3,8);

    return 0;
}