/*#include<iostream> 
using namespace std; 
int main(){
int n; 
cin>>n; 
arr[i];
for (int i = 0; i < n; i++)
{
 cin>>arr[i];
} 




   return 0;
}*/ 

// cpp program to find sum of all subarrays 

#include<iostream>
using namespace std; 
int main(){
int n; 
cin>>n;
int arr[n]; int sum=0;  int temp=0;  
for (int i = 0; i <n; i++)
{
cin>>arr[i];
}
  
for (int i = 0; i <n; i++)// starting point
{  
sum=0;
for (int j = i; j <n; j++) //ending point 
{ //long int temp=0;

	sum+=arr[j];
	temp+=sum;
	
}

}  

cout<<temp;


	return 0;
}

