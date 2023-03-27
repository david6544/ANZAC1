#include<iostream>
#include<string>
#include<unordered_map>
#include<cmath>

bool isprime(int n) {

    if (n == 0 || n == 1) {
        return false;
    }
    if (n == 2) return true;

    int m = sqrt(n);

    for (int i = 3; i <= m; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}


int solution(int n) {


    int res = 0;

    while (n > 3) {
        if(n == 4) return res + 1;
        for (int i = n; i > -1; i--) {
            if (i % 2 == 0) continue;
            int temp = i;
            if (isprime(i)) {
                if (isprime(n-temp)) {
                    //std::cout << temp << " " << n-temp << std::endl;
                    n = temp - (n - temp);
                    res++;
                    break;
                } 
            }
        }
        //std::cout << n << std::endl;
    }
        

    return res;
}


int main(void) {

    int n;
    std::cin >> n;

    std::cout << solution(n) << std::endl;

    return 0;
}