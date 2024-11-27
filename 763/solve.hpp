#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<numeric>
#include<map>
using namespace std;

class Solution {
public:
    vector<int> partitionLabels(string s) {
        
		map<char, unsigned long> last;
		vector<int> res;
		unsigned long len = 0, start = 0;
		for (unsigned long i = 0; i < s.size(); i ++)
			last[s[i]] = i;
		
		for (unsigned long i = 0; i < s.size(); i ++){
			
			len = max(len, last[s[i]]);
			if (i == len){
				res.push_back(len - start + 1);
				start = i + 1;
			}
		}
		return res;
		
    }	
};