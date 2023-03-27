#include<iostream>
#include<vector>
#include<cmath>
#include<string>



std::vector<int> solution(int digit, std::string arr) {

    bool check = false;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] - '0' < digit) {
            arr.insert(arr.begin()+i,digit + '0');
            check = true;
            break;
        }
    }
    if (!check) {
        arr.push_back(digit + '0');
    }

    std::vector<int> res;

    for (auto x : arr) {
        res.push_back(x - '0');
    }
    
    return res;
}


int main(void) {

    int digit;
    std::cin >> digit;

    std::string n;
    std::cin >> n;


    std:: vector<int> res = solution(digit,n);

    for (auto x : res) {
        std::cout << x;
    }

    return 0;
}