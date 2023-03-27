#include<iostream>
#include<iomanip>
#include<string>
#include<unordered_map>
#include<cmath>
#include<vector>
#include<climits>
#include<algorithm>



double solution(int postx,int posty, int x1, int y1, int x2, int y2) {

    std::vector<double> dists;
    double res = INT_MAX;

    for (int i = x1; i <= x2; i++) {
        for (int j = y1; j <= y2; j++) {
            
            double hdist = abs(i - postx);
            double ydist = abs(j - posty);
            hdist *= hdist;
            ydist *= ydist;

            double fulldist = hdist + ydist;
            
            fulldist = sqrt(fulldist);
            

            dists.push_back(fulldist);
        }
    }

    res = *std::min_element(dists.begin(),dists.end());

    return res;
}


int main(void) {

    int postx;
    std::cin >> postx;

    int posty;
    std::cin >> posty;

    int housex1;
    std::cin >> housex1;

    int housey1;
    std::cin >> housey1;

    int housex2;
    std::cin >> housex2;

    int housey2;
    std::cin >> housey2;


    // std::cout << std::setprecision(3) << std::fixed;
    //std::cout << solution(postx,posty,housex1,housey1,housex2,housey2) << std::endl;

    double res = solution(postx,posty,housex1,housey1,housex2,housey2);
    printf("%.3f\n",res);

    return 0;
}