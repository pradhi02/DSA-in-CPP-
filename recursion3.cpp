/*#include<iostream>
using namespace std;
void reverseString(string &str,int start, int end){
    //base case
    cout<<"the cutrrent string is"<<" " <<str<<endl;;
    if(start>end){
        return;
    }
    //ek case swap krlo
    swap(str[start],str[end]);
    start++;
    end--;
    //baki k liye we will call recursion
    reverseString(str,start,end);

}
int main(){
    cout<<"SB SAHI CHAL RAHA HAI BHAI "<<endl;

    string s="T A T T I ";
    reverseString(s,0,s.length()-1);
    cout<<s;
return 0;
}*/

/*#include<iostream>
using namespace std;
bool checkPalindrom(string str,int s, int e){
    //base case
    if(s>e){
        return true; //mtlb sare character ho chuke hai true retrun krde
    }
    if(str[s]!=str[e]){
        return false;
    }
    else{
        //recurring relations
        return checkPalindrom(str,s+1,e-1);
    }

}
int main(){
    string s = "aabbcbbaa";
    bool ans=checkPalindrom(s,0,s.length()-1);
    cout<<ans;
    return 0;
} */

/*#include<iostream>
using namespace std;
int power(int a,int b){
 //basecase
 cout<<"the value of a is "<<a<<" "<< "the value of b is"
     <<b<<endl;
if(b==0){
     return 1;
 }
 if(b==1){
     return a;
 }
 //ek case solve kr lete hai baki recursion khud kr lega
 int ans=power(a,b/2);
 //if b is even
 if(b%2==0){
     return ans*ans;
 }
 else{ //b is odd
     return a*ans*ans;
 }
}
int main(){
 cout<<power(2,4)<<endl;
 cout<<power(3,4)<<endl;
 cout<<power(5,4)<<endl;
 cout<<power(3,11)<<endl;

 return 0;
} */

/*#include<iostream>
using namespace std;
void sort(int arr[],int size){
 //base case
 //cout<<arr[size];
 if(size==0 || size ==1){
     return;
 }

 //ek case solve kr leteb hai - placing elemet to its correct position na broo
 for (int i=0;i<size-1; i++ )/*agar n likhelneg to last element pr jane k baad vo n+1 ho jayega and array k last elemnt se aagr nikal kayega
 {
     if(arr[i] > arr[i+1]) {
     swap(arr[i],arr[i+1]);
     }
 }

 //ab hamara first element uske correct positio pr pada hai toh array k size n-1 hogya hai hence
 sort(arr,size-1);


}
int main(){
 int array[5]={23,12,56,22,6};
 sort(array,5);
 for(int i=0;i<5;i++){
     cout<<array[i]<<" ";
 }
 return 0;
} */

/*#include<iostream>
using namespace std;
void printNos(int N)
    {  //cout<<N;
        //Your code herr
        //base case
        if(N=0){
            return;
        }


        printNos(N-1);
        cout<<N;
    }

int main(){
 int n=5;
 //cin>>n;
 printNos(n);

    return 0;
} */

/*#include <iostream>
using namespace std;
void selectionsort(int arr[], int size)
{
    //int minindex;
    // int minindex=i;

    for (int i = 0; i < size; i++)
    {
        int minindex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minindex])
            {
                minindex = j;
            }
    
        } 
        swap(arr[minindex],arr[i]);
    }
}

int main()
{
    int arr[5]={88, 45 , 53, 12, 34}; 
    selectionsort(arr,5); 
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}  
*/ 

#include <iostream>
using namespace std;

void selectionSort(int arr[], int n, int index = 0) {
    // base case
    if (index >n ) {
        return;
    }

    // find the minimum element in the remaining array
    int min_index = index;
    for (int i = index + 1; i < n; i++) {
        if (arr[i] < arr[min_index]) {
            min_index = i;
        }
    }

    // swap the minimum element with the first element in the remaining array
    swap(arr[index], arr[min_index]);

    // recursive call to sort the remaining array
    selectionSort(arr, n, index + 1);
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


