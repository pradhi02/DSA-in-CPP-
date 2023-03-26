
/*#include<iostream>
using namespace std; 
bool isPresent(int arr[][4],int target,int row,int col){
for(int row=0;row<3;row++){
    for(int column=0;column<4;column++){
    if(arr[row][column] == target){
    return 1; }
    
    } 
   }  
   return 0; 
}
int main(){  
  //crerating 2d array 
  int arr[3][4];  
  //we can take input like this also  
  //int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12}; 
  //we can also givine inputr accroing to our will 
  //int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}} ; 
  //taking input of 2d array == row wise since we are running for loop for row first 
for(int row=0;row<3;row++){
    for(int column=0;column<4;column++){
    cin>>arr[row][column];
    } 
   }  
  

   //taking column wise input 
/*for(int row=0;row<4;row++){
    for(int column=0;column<3;column++){
    cin>>arr[column][row];
    }
   } */ 


//printing array
/*for(int row=0;row<3;row++){
    for(int column=0;column<4;column++){
    cout<<arr[row][column]<<" ";
    } 
    cout<<endl; 
   }   
int target;
cin>>target;
   int ans=isPresent(arr,target,3,4); //time complexity is o(row)(column)
   if(ans==1){
    cout<<"element found";
   } 
   else{cout<<"fuck u";}
   //cout<<ans;

   
}*/ 
  
  //rowwise sum prog 
/* #include<iostream>
 #include<climits>
 using namespace std; 
 void rowSum(int array[][3],int row, int columns){
    //int ans=0; 
    for(int i=0;i<row;i++){ 
        int ans=0;
        for(int j=0;j<columns;j++){
            ans=ans+array[i][j];
        }
          cout<<ans<<endl;
    }
 } 
 void colSum(int array[][3],int row, int columns){
    //int ans=0; 
    for(int j=0;j<columns ;j++){ 
        int ans=0;
        for(int i=0;i<row;i++){
            ans=ans+array[i][j];
        }
          cout<<ans<<endl;
    }
 }  
 int rowSumMax(int array[][3],int row,int columns){ 
    int maxi=INT_MIN; int rowindex=-1;
 for(int i=0;i<row;i++){ 
        int ans=0;
        for(int j=0;j<columns;j++){
            ans=ans+array[i][j];
        }
          if(ans>maxi){
            maxi=ans; 
            rowindex=row;
          }
    }  
    cout<<"the maximum sum is"<<maxi<<endl;
 return rowindex ;
 }
 
 int main(){ 
    int arr[3][3]={1,2,3,4,5,6,7,8,9}; 
    rowSum(arr,3,3); 
    //cout<<ans; 
    colSum(arr,3,3); 
   int final=rowSumMax(arr,3,3);
   cout<<final;  

    return 0; 

 }*/ 

#include<iostream> 
using namespace std; 
int main(){  
cout<<" " ; cout<<" "; 
cout<<" "<<" "<<" "; cout<<" ";  
cout<<"hi hellllo bye"<<endl;  
cout<<" "; cout<<" ";  

    

 


    return 0;
}
