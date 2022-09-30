#include <iostream>
#include <vector>

using namespace std;

vector<int> sums;

void NumArray_303(vector<int>& nums) {
	int n = nums.size();
	sums.resize(n + 1);
	for (int i = 0; i < n; i++)
	{
		sums[i + 1] = sums[i] + nums[i];
	}
}

int sumRange(int left, int right) {
	return sums[right + 1] - sums[left];
}