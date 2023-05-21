 //print all the sunsequence of a string/charaaray 
 /*#include<iostream>
using namespace std;   
void SubSequences( string s, int index , string newstring){ 
//base case 
if (index==s.length())
{
  cout<<newstring<<endl;   
  return; 
}



//now the character has two optionns 

//to be 
char c= s[index]; 
SubSequences(s,index+1,newstring+c); 

//or not to be  
SubSequences(s,index+1,newstring);

}

int main(){   
    string s = "aaaa"; 
    SubSequences(s,0,"");

    
    return  0;
}*/ 

/*#include <iostream>
#include <unordered_set>
using namespace std;

void printUniqueSubsequences(string str, string newstring, int index, unordered_set<string>& uniqueSubsequences) {
    if (index == str.length()) {
        if (!newstring.empty()) {
            uniqueSubsequences.insert(newstring);
        }
        return;
    }

    // Include the current character
    printUniqueSubsequences(str, newstring + str[index], index + 1, uniqueSubsequences);

    // Exclude the current character
    printUniqueSubsequences(str, newstring, index + 1, uniqueSubsequences);
}

int main() {
    string str = "aaa";

    unordered_set<string> uniqueSubsequences;
    printUniqueSubsequences(str, "", 0, uniqueSubsequences);

    cout << "Unique Subsequences:" << endl;
    for (const string& newstring : uniqueSubsequences) {
        cout << newstring << endl;
    }

    return 0;
}*/ 

/*#include<iostream> 
#include<unordered_set>
using namespace std; 
void UniqueSubsequences( string s, int index, string newstring , unordered_set<string> &subsequence ){ 
    //base case 
    if(index==s.length()){ 
        if(!newstring.empty()){ 
            subsequence.insert(newstring);
        } 
        return ;
    }  
    char c = s[index]; 
    //reucrsive calls for to be and not to be  
    //to be 
    UniqueSubsequences(s,index+1,newstring+c,subsequence);  
    //not to be  
    UniqueSubsequences(s,index+1,newstring,subsequence); 

}
int main(){ 
  unordered_set<string>subsequence;  

  string s="aaa"; 
  UniqueSubsequences(s,0,"",subsequence); 
   for (auto it = subsequence.begin(); it != subsequence.end(); ++it) {
        cout << *it << " ";
    }
    return 0;
}*/ 

#include<iostream>
using namespace std;    
string mapping [10]={ 
   '' ,'abc', 'def','ghi','jkl', ' mno', 'pqr','stu', ''
}

void PhoneCombination( string s, int index, string combination)
int main(){ 
     
    return 0;
}
