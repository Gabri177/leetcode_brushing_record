#include "./solve.hpp"

int main() {
	Solution sol;
	vector<int> g = {1, 2, 3};
	vector<int> s = {3};
	cout << sol.findContentChildren(g, s) << endl;
	return 0;
}