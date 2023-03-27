#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>



int solution(int s, std::vector<int> v1) {

    int vmax = *std::max_element(v1.begin(),v1.end());

    int newmax = s * vmax;

    int res = ceil(newmax / 1000.0);

/* 


    int copy = newmax;

    std::vector<int> temp;

    while (copy > 0) {
        temp.push_back(copy % 10);
        copy /= 10;
    }

    std::reverse(temp.begin(),temp.end());
    if (temp.size() < 4) return 1;

    for (int i = 0; i < temp.size(); i++) {
        if (i > 0 && temp[i] > 0 && temp.size() > 3) return temp[0] + 1;
    } */

   return res;
}


int main(void) {

    int size;
    std::cin >> size;

    int s;
    std::cin >> s;

    std::vector<int> v1 (size,0);

    for (int i = 0; i < size; i++) {
        int temp;
        std::cin >> temp;
        v1[i] = temp;
    }

   
    std::cout << solution(s,v1) << std::endl;

   

    return 0;
}