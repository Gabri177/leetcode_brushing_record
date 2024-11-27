#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;



class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), [](const vector<int>&a, const vector<int>&b){
			return a[1] < b[1];
		});
		int count = 1;
		int pre_end = points[0][1];
		for (unsigned long i = 1; i < points.size(); i ++){
			if (points[i][0] > pre_end){
				count ++;
				pre_end = points[i][1];
			}
		}
		return count;
    }
};