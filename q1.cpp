#include<iostream>
#include<string>
#include<unordered_map>


std::string solution(int n) {
    std::string res;
        
    std::unordered_map<int,int> fib;
    
    fib[0] = 1;
    fib[1] = 1;
    fib[2] = 1;
    fib[3] = 1;
    fib[5] = 1;
    fib[8] = 1;
    
    for (int i = 1; i <= n; i++) {
        if (fib[i] == 1) {
            res += "fizz";
        } else {
            res += "buzz";
        }
    }

    return res;
}


int main(void) {

    int n;
    std::cin >> n;
    std::cout << solution(n) << std::endl;

    return 0;
}