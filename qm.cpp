#include<iostream>
#include<vector>
#include<cmath>
#include<string>



int solution(int fscore, std::string s1, std::string s2) {
    if (s1 == s2) return fscore;

    int mscore = 0;
    int same = 0;

    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] == s2[i]) {
            same++;
        }
    }

    if (same == 0) return s1.size()-fscore;

    fscore = abs(fscore - same);
    int res = s1.size() - fscore;

   /*  for (int i = 0; i < s1.size(); i++) {
        if (fscore >= 1) {
            std::cout << s1[i] << " " << s2[i] << std::endl;
            if (s1[i] == s2[i]) {
                fscore--;
                mscore++;
            }
        }
        std::cout << fscore << " " << mscore << std::endl;
    }
    for (int i = 0; i < s1.size(); i++) {
          if (fscore == 0) {
            if (s1[i] != s2[i]) {
                mscore++;
            }
        }
        std::cout << fscore << " " << mscore << std::endl;
    }

 */
    
    return res;
}


int main(void) {

    int fscore;
    std::cin >> fscore;

    std::string s1;
    std::cin >> s1;

    std::string s2;
    std::cin >> s2;


    std::cout << solution(fscore,s1,s2) << std::endl;

   

    return 0;
}