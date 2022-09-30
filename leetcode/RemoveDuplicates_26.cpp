#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
	int slow = 0, fast = 0;
	while (fast < nums.size()) {
		if (nums[slow] == nums[fast]) {
			fast++;
		}
		else
		{
			slow++;
			nums[slow] = nums[fast];
		}
	}
	return slow+1;
}
int main() {
	vector<int> nums = { 0,0,1,1,1,2,2,3,3,4 };
	int n = removeDuplicates(nums);
	cout << n << endl;
	for (int i = 0; i < n; i++)
	{
		cout << nums[i] << endl;
	}
}