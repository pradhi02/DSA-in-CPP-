/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        cout<<arr[i]<<endl;
    }



    return 0;
}*/

/*#include<iostream>
using namespace std;
int i;
int linearsearch (int key,int arr[], int n){
    for ( i = 0; i < n; i++)
    {
    if (arr[i]==key)
    {
        return i;
    } }

        return -1;

    }

int main(){
    int n;
    cin>>n;
    int arr[n];
    for ( i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
     int key;
     cin>>key;
     cout<<linearsearch(key,arr,n);
    return 0;
}
*/
// Binary search
#include <iostream>
using namespace std;
int binarysearch(int n, int arr[], int key)
{
    int s, e;
    s = 0, e = n;
    int mid = s + e / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key; 
    cout<<binarysearch(n,arr,key);

    return 0;
}