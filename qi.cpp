#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>



std::vector<std::vector<int> > solution(std::vector<std::vector<int> > v1) {

    int rows = v1.size();
    int cols = v1[0].size();

    std::vector<std::vector<int> > res (rows, std::vector<int>(cols,0));

    for (int i = 1; i < rows-1; i++) {
        for (int j = 1; j < cols-1; j++) {
            if (v1[i-1][j] > v1[i][j] && v1[i][j-1] > v1[i][j] && v1[i+1][j] > v1[i][j] && v1[i][j+1] > v1[i][j]) {
                res[i][j] = 1;
            }
        }
    }


    return res;
}


int main(void) {


    int rows;
    std::cin >> rows;

    int cols;
    std::cin >> cols; 

    std::vector<std::vector<int> > v1;


    for (int i = 0; i < rows; i++) {
        std::vector<int> rowarray;
        for (int j = 0; j < cols; j++) {
            int temp;
            std::cin >> temp;
            rowarray.push_back(temp);
        }
        v1.push_back(rowarray);
    }

    std::vector< std::vector<int> > res = solution(v1);

    for (auto x : res) {
        for (auto y : x) {
            std::cout << y << " ";
        }
        std::cout << std::endl;
    }
   

    return 0;
}