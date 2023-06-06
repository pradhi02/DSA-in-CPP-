/*#include<iostream>
using namespace std;  
int main(){
cout<<"hello g ";  
return 0;
}*/ 

/*the perfection code 
def is_perfect_num(n):
divisor_sum=sum(i for i in range(1,n)if n%1==0)
retrun divisor_sum==n 
num_test_cases=int(input())
for_in range (num_test_cases):
for_in range (input())
N=int(inout())
if is_perfect_number(n):
print("yes")
else : 
print ("no") 


#include <iostream>

bool is_perfect_num(int n) {
    int divisor_sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            divisor_sum += i;
        }
    }
    return divisor_sum == n;
}

int main() {
    int num_test_cases;
    std::cin >> num_test_cases;
    for (int i = 0; i < num_test_cases; i++) {
        int N;
        std::cin >> N;
        if (is_perfect_num(N)) {
            std::cout << "yes" << std::endl;
        } else {
            std::cout << "no" << std::endl;
        }
    }
    return 0;
}*/ 

/*//xor distance code in cpp 
#include <iostream>
#include <vector>

int count_pairs(std::vector<std::pair<int, int>>& arr, int K) {
    int count = 0;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            int distance = abs(arr[i].first - arr[j].first) + abs(arr[i].second - arr[j].second);
            if (distance == K) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int N;
        std::cin >> N;
        std::vector<std::pair<int, int>> arr;
        for (int i = 0; i < N; i++) {
            int x, y;
            std::cin >> x >> y;
            arr.push_back(std::make_pair(x, y));
        }
        int K;
        std::cin >> K;
        int result = count_pairs(arr, K);
        std::cout << result << std::endl;
    }
    return 0;
}
*/ 

/*max equal num code in cpp 
#include <iostream>
#include <vector>
#include <unordered_map>

int max_equal_length(std::vector<int>& arr, int k) {
    std::unordered_map<int, int> count;
    int max_length = 0;
    
    for (int num : arr) {
        for (int x = -k; x <= k; x++) {
            int modified_num = num + x;
            if (count.find(modified_num) != count.end()) {
                count[modified_num]++;
            } else {
                count[modified_num] = 1;
            }
            max_length = std::max(max_length, count[modified_num]);
        }
    }
    
    return max_length;
}

int main() {
    int T;
    std::cin >> T;
    
    while (T--) {
        int n, k;
        std::cin >> n >> k;
        std::vector<int> arr(n);
        
        for (int i = 0; i < n; i++) {
            std::cin >> arr[i];
        }
        
        int result = max_equal_length(arr, k);
        std::cout << result << std::endl;
    }
    
    return 0;
}*/ 

//brackets question 
/*
#include <iostream>
#include <string>

int count_balanced_brackets(int n, std::string& brackets) {
    int open_count = 0;
    int close_count = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (brackets[i] == '(') {
            open_count++;
        } else if (brackets[i] == ')') {
            close_count++;
        }

        if (open_count > 0 && close_count > 0) {
            count++;
            open_count--;
            close_count--;
        }
    }

    return count;
}

int main() {
    int n;
    std::cin >> n;

    while (n--) {
        int length;
        std::cin >> length;
        std::string sequence;
        std::cin >> sequence;

        int result = count_balanced_brackets(length, sequence);
        std::cout << result << std::endl;
    }

    return 0;
} */  

//digonal question 






