#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<numeric>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int max_intres = 0;
        if (prices.size() <= 1)
            return max_intres;
        for (unsigned long i = 1; i < prices.size(); i ++)
            if (prices[i] > prices[i - 1])
                max_intres += prices[i] - prices[i - 1];
        return max_intres;
    }
};