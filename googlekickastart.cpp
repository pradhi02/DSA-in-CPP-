/* #include<iostream> 
using namespace std; 
int main(){ 
    int n; 
    cin>>n; 
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    //pd-previous common difference 
    //current-current max length 
    //ans-max arithemetic subarray lenght 

int ans=2; //hum man lete hai ki longest lenght ab tak ki 2 hai
int pd=arr[1]-arr[0];
int j=2; //starting after 2 coz we have,supposed the scenrios till 1 element
int current=2; //current arithemetic array lenght
while (j<n)
{
     if (pd == arr[j]-arr[j-1])
     {
        current++;
     }
     
 else{
    pd=arr[j]-arr[j-1];
    current=2;
 }
ans=max(ans,current);
j++;
}
cout<<ans<<endl; 
    return 0;
} */ 

 #include<iostream> 
 #include<climits>
 using namespace std;
int main(){ 
int n;
cin>>n; 
int arr[n]; 
for (int i = 0; i < n; i++)
{
    cin>>arr[i]; 
}  
int ans=0;
int mx=INT_MIN;
for (int i = 0; i < n; i++)
{
    if (arr[i]> mx && arr[i]>arr[i+1])
    {
        ans++;
    }
    mx=max(mx,arr[i]);
}
cout<<ans<<endl;




    return 0;
 }