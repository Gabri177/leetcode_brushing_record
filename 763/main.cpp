#include "./solve.hpp"
#include <string>
#include <iostream>
using namespace std;
int main() {

	Solution s;
	string str = "ababcbacadefegdehijhklij";
	auto res = s.partitionLabels(str);
	cout << "[ ";
	for (auto i : res)
		cout << i << " ";
	cout << "]" << endl;

	return 0;
}