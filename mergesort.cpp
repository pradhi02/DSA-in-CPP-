#include <iostream>
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
    int mainarrayindex=s;
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainarrayindex++] = first[index1++];
        }
        else
        {
            arr[mainarrayindex++] = second[index2++];
        }
    }

    // bache hue elements bhi copy krne hai
    while (index1 < len1)
    {
        arr[mainarrayindex++] = first[index1++];
    }

    // bache hue elements form arrays 2 copey krne hai na
    while (index2 < len2)
    {
        arr[mainarrayindex++] = first[index2++];
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
}
