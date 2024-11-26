#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
		if (intervals.empty()) return 0;
		sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
			return a[1] < b[1];
    	});
		int n = intervals.size();
		int pre_end = intervals[0][1];
		int remove = 0;
		for (int i = 1; i < n; i++) {
			if (intervals[i][0] < pre_end)
				remove++;
			else
				pre_end = intervals[i][1];
		}
		return remove;
	}
};