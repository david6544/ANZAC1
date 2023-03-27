#include<iostream>
#include<vector>
#include<cmath>
#include<string>



int solution(int size, std::vector<std::vector<int> > v1) {

    int xmax = INT_MIN;
    int ymax = INT_MIN;
    int ymin = INT_MAX;
    int xmin = INT_MAX;
    
    for (int i = 0 ; i < v1.size(); i++) {
        for (int j = 0; j < v1[0].size(); j++) {
            if (j % 2 == 0) {
                xmax = std::max(xmax,v1[i][j]);
                xmin = std::min(xmin,v1[i][j]);
            } else {
                ymax = std::max(ymax,v1[i][j]);
                ymin = std::min(ymin,v1[i][j]);
            }
        }
    }

    std::vector<std::vector<int> > rects (ymax-ymin, std::vector<int>(xmax-xmin));
/* 
    std::cout << ymax << " " << ymin << std::endl;
    std::cout << xmax << " " << xmin << std::endl; */

    for (int i = 0 ; i < rects.size(); i++) {
        for (int j = 0; j < rects[0].size(); j++) {
            if (j % 2 == 0) {
                xmax = std::max(xmax,v1[i][j]);
                xmin = std::min(xmin,v1[i][j]);
            } else {
                ymax = std::max(ymax,v1[i][j]);
                ymin = std::min(ymin,v1[i][j]);
            }
        }
    }


    for (auto x : rects) {
        for (auto y : x) {
            std::cout << y << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}


int main(void) {

    int size;
    std::cin >> size;

    std::vector<std::vector<int> > v1;


    for (int i = 0; i < size; i++) {
        std::vector<int> rowarray;
        for (int j = 0; j < 4; j++) {
            int temp;
            std::cin >> temp;
            rowarray.push_back(temp);
        }
        v1.push_back(rowarray);
    }

   
    std::cout << solution(size,v1) << std::endl;

   

    return 0;
}