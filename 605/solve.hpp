#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int length = flowerbed.size();
        int num_plant = 0;
        for (int i = 0; i < length; i ++) {
            
            if (flowerbed[i] == 0){

                bool left_emp = (i == 0 || flowerbed[i - 1] == 0);
                bool right_emp = (i == length - 1 || flowerbed[i + 1] == 0);
                if (left_emp && right_emp){
                    num_plant ++;
                    flowerbed[i] = 1;
                }
            }
            if (num_plant >= n)
                        return true;
        }
        return false;

    }
};