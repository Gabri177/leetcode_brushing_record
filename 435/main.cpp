#include "./solve.hpp"

int main() {
	
	Solution s;
	vector<std::vector<int>> range_sets = {
        {1, 3},
        {2, 4},
        {3, 5},
        {4, 6}
    };
	cout << s.eraseOverlapIntervals(range_sets) << endl;

	return 0;
}