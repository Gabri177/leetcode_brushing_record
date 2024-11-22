#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        
		sort(g.begin(), g.end());
		sort(s.begin(), s.end());
		unsigned long content = 0;
		unsigned long i = 0;
		unsigned long j = 0;

		for (; i < g.size(); i++) {
			
			for (; j < s.size(); j++) {

				if (s[j] >= g[i]) {
					content++;
					j++;
					break;	
				}
			}
		}
		return content;
    }	
};