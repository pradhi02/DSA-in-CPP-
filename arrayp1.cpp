/*#include<iostream>
using namespace std;  
int getsum( int *arr,int row){
    int sum=0;
    for (int  i = 0; i <row; i++)
    {
        sum=sum+arr[i];
    } 
    return sum;
    
}
int main(){ 
    /*
int array[100]={1,2,3}; 
cout<<&array[1];cout<<endl;
cout<<&array[2];cout<<endl;
cout<<&array[99];cout<<endl; */ 
/*char c='e';
new char; 
char *ch= new char; 
cout<<sizeof(new char)<<endl;
cout<<sizeof(ch)<<endl; 

int row;
cin>>row; 
int *arr= new  int [row];
for(int i=0;i<row;i++) {
    cin>>arr[i];
}
//int arr[row]; 
int ans=getsum(arr,row); 
cout<<ans;


return 0;} */ 

/*#include<iostream>
using namespace std;
int main(){ 
    while(true){
        int *ptr=new int ;
    }
    return 0;
}*/ 

  

   #include<iostream>
   using namespace std;
   int main(){ 
    int row;
    cin>>row; 
    int col;
    cin>>col; 

    //creating 2D array 
    int **arr=new int*[row]; 
    for(int i=0;i<row;i++){
        arr[i]=new int[col];
    } 

    //taking input 
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }   
    }        

    //taking output
        for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        } 
        cout<<endl;
    } 
  

  //releasing the memory used in heap 
     
     for(int i=0;i<row;i++){
        delete []arr[i];
    } 
  delete[]arr; 
    
    return 0;
   }