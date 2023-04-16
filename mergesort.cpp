/*#include <iostream>
using namespace std;
void merge(int arr[], int s, int e)
{
    // finding mid coz sara game us pr hi depene kr rha hai
    int mid = s + (e - s) / 2;
    // dono divided arrays k liye lenght declar kr diya hai
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // now i will copy the elements of from arraay main to array 1 and 2 nd 
    int mainindex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainindex++];
    }

    /// copying elements in array 2
    mainindex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainindex++];
    }

    // marger two sorted arrays
    int index1 = 0;
    int index2 = 0; 
    int mainindex=s;
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainindex++] = first[index1++];
        }
        else
        {
            arr[mainindex++] = second[index2++];
        }
    }

    // bache hue elements bhi copy krne hai
    while (index1 < len1)
    {
        arr[mainindex++] = first[index1++];
    }

    // bache hue elements form arrays 2 copey krne hai na
    while (index2 < len2)
    {
        arr[mainindex++] = second[index2++];
    } 

    delete []first;
    delete[]second;
}
 
//CODE FOR MERGE SORT BRO 

void MergeSort(int arr[],int start, int end){ 
    //base case 
    if(start>=end){
        return;
    }
    int mid=start+(end-start)/2;  

    //left part ko sort krna hai 
    MergeSort(arr,start,mid); 

    //right part ko sort karo broo 
    MergeSort(arr,mid+1,end) ;


    //ab array ko mergge krna hai 
    merge(arr,start,end);

   



}
int main()
{ 

    int arr [5]={5,4,3,2,1} ; 
    MergeSort(arr,0,4);
    
    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    } cout << endl;

    return 0;
}*/ 

/*#include<iostream>
using namespace std; 
void merge(int *arr,int s, int e){ 
 //finding mid for the required arrays   
int mid=s+(e-s)/2;  
//defining lengths of the 2 divided arrays
int len1 = mid-s+1;
int len2 = e-mid;  

//creating new arrays to copy the elements
int *first= new int[len1];
int *second= new int[len2];   

int mainindex=s; 
//copying elements from main index to the 1st array 
for(int i=0;i<len1;i++){
    first[i]=arr[mainindex++];  
} 

//ab yaha pr mainindex shift ho jayega  mid+1; 

mainindex=mid+1; 
//copying array in second array from main array 
for (int i = 0; i <len2; i++)
{
    second[i]=arr[mainindex++];
} 

//now we will start coping and sorting 
int index1=0;
int index2=0; 
mainindex=s; 

while(index1<len1 && index2<len2){
    if(first[index1]<second[index2]){
        arr[mainindex++]=first[index1++];
    } 
    else{ 
        arr[mainindex++]=second[index2++];
    }
} 

//now copying the remaining items of array 1 
while(index1<len1){ 
    arr[mainindex++]=first[index1++];

}  

//cpopying the rmeinaing elements from the second array 
while(index2<len2){ 
    arr[mainindex++]=second[index2++];

} } 

void mergesort(int arr[],int s, int e){
    //base case 
    if(s>=e){
        return;
    }  
    int mid = s+(e-s)/2;

    //left part sort krna hai 
    mergesort(arr,s,mid);
    //right part sort kro  
    mergesort(arr,mid+1,e); 
//meriging the array 
    merge(arr,s,e); 
}
    int main(){ 
        int arr[6]={6,5,4,3,2,1};
        mergesort(arr,0,5);
        
        //printing oupytput of the array; 

        for(int i=0;i<6;i++){
            cout<<arr[i]<<" ";
        } 
        return 0;
    }*/ 

    #include<iostream>
    using namespace std;   
    long long merge(int arr[],int s, int e){
        //finidng mid for the  
        long long invcount =0;
       int  mid=s+(e-s)/2;  
       
       //defining length fof the first and second arrays 
       //first array 
       int len1=mid-s+1; 
       
       int len2=e-mid; //second array length 

       //making two array
       int *first =  new int  [len1];
       int *second=  new int [len2];  

       //defining main array index and copying elelements in the new array 
       int mainarrayindex=s; 
       //coping element in first array 
        for (int i = 0; i < len1; i++)
        {
           first[i]=arr[mainarrayindex++];
        } 
        //copying elements in second array  
        mainarrayindex=mid+1; 

        for(int i=0;i<len2;i++){
            second[i]=arr[mainarrayindex++];
        } 

        //now we will start putting elements in main arrays and at the same time will start countig inversions 
        mainarrayindex=s; 
       int  index1=0;
       int  index2=0; 
       while(index1<len1 && index2 <len2){
        if(first[index1]<second[index2]) {
            arr[mainarrayindex++]=first[index1++];
        } 
        else{ 
            arr[mainarrayindex++]=second[index2++] ;
         
         invcount=invcount+(len1-index1);}
       } 
        //bache hue elements copyr krne k liye 
        while(index1<len1){
            first[index1++]=arr[mainarrayindex++];
        } 

        //second arrays k bache hue elemenys 
         while(index2<len2){
            second[index2++]=arr[mainarrayindex++];
        } 

        return invcount;
        


    }
    long long  mergeSort(int arr[],int s,int e){
        //base case of recursion  
        int mid; long long invcount=0;
        if(s>=e){
         return 0; }
        
        //finding mid 
        mid=s+(e-s)/2;   
       //long long invcount=0;
       //left part sorting broski  
      invcount+=mergeSort(arr,s,mid);
       invcount +=mergeSort(arr,mid+1,e); 

       invcount+= merge(arr,s,e);
        
        return invcount;

    }
  int main(){ 
    cout<<"hello program sahi chal raha hai"<<endl; 
    int array[4]={8,4,2,1}; 
    int ans=mergeSort(array,0,3); 
    cout<<ans;

    return 0;
  }