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

/*#include<iostream>
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
}*/ 

/* #include<iostream>
using namespace std;
void merge(int num1[],int m,int num2[],int n){
    int i=0,j=0;
    while(i<m && j<n){
        if(num1[i]<num2[j]){
            num1[i]=arr1[i];
            i++;
            j++;
        } 
        else{
            num1[i]=num2[j];
            i++;
            j++;
        }
    }
}
int main(){ 

int arr1[6]={1,2,3,0,0,0};
int arr2[3]={ 2,5,6}; 
 
 int ans=merge(arr1.6,arr2,3);
 cout<<ans;
    

} */  

//double pointer 

/*#include<iostream> 
using namespace std; 
void update(int **p){
   // p=p+1; //nothing will chnage hence no updates in the value 
  // *p=*p+1; //yaha p1 k address shift hoga 
   **p+**p+1; //num ki value 1 se incremet ho jaygei 

}
int main(){  
    int num=5;
    int *p1=&num;
    int **p2=&p1;
    /*int ***p3=&p2; 
    cout<<p1; cout<<endl;
    cout<<p2; cout<<endl;
    cout<<p3; cout<<endl;
    cout<<*p1; cout<<endl;
    cout<<**p2; cout<<endl;
    cout<<***p3; cout<<endl; 
    cout<<p2; cout<<endl; 
    cout<<&p1; 
    cout<<"before"<<num<<endl;
    cout<<"before"<<p1<<endl; 
    //cout<<"before adddress is"<<&p1; 
    cout<<"before"<<p2<<endl;
    update(p2);
    // cout<<update(p2);
    
    cout<<"after"<<num<<endl;
    cout<<"after"<<p1<<endl;
    cout<<"after"<<p2<<endl; 
    cout<<num;
    //cout<<N

    return 0;
} */ 


/*#include<iostream>
using namespace std;

void update(int **p2) {
    //p2 = p2 + 1;
    //kuch change hoga  - NO

    //*p2 = *p2 + 1;
    //kuch change hoga - YES

    **p2 = **p2 + 1;
    //kuch change hoga - YES
}
    /*void update(int *p){
        *p = (*p)  *  2;
    }
        void increment(int **p){
        ++(**p);
    } 
int main() {

    int i = 5;
    int* p = &i;
    int** p2 = &p;
    cout<< endl << endl <<" Sab sahi chal rha h " << endl << endl ;
    cout << i << endl;
    cout << *p << endl;
    cout << **p2 << endl;
    cout << &i << endl;
    cout << p << endl;
    cout << *p2 << endl;
    cout << &p << endl;
    cout << p2 << endl;
    cout << endl << endl;
    cout<< "before " << i << endl;
    cout<< "before " << p << endl;
    cout<< "before " << p2 << endl;
    update(p2);
    cout<< "after " << i << endl;
    cout<< "after " << p << endl;
    cout<< "after " << p2 << endl;
    cout << endl << endl;
    return 0;
    }
*/ 

/*#include<iostream>
using namespace std; 
void update(int **p){
    **p =**p+1;
}
int main(){ 
    int i=5;
    int *p=&i;
    int **p1=&p;  
    cout<<"before update--"<<i<<endl;
    cout<<"before update--"<<p<<endl;
    cout<<"before update--"<< p1<<endl;
   // cout<<"before update--"<<i<<endl; 
   update(p1); 
   cout<<"after update--"<<i<<endl;
    cout<<"after update--"<<p<<endl;
    cout<<"after update--"<<p1<<endl;
    

    return 0;
}*/ 

#include<iostream>
using namespace std; 
int main(){
    int a=12;
    a=13;
    cout<<a; 
    int *p=&a;
    *p=9;
    cout<<*p;
    return 0;
}


