#include "./solve.hpp"


int main() {

	Solution s;
	vector<vector <int>> points = {
		{10, 16},
		{2, 8},
		{1, 6},
		{7, 12}
	};
	cout << s.findMinArrowShots(points) << endl;
}
