#include <iostream>
#include <vector>

using namespace std;
int removeElement(vector<int>& nums, int val) {
	if (nums.size() == 0) {
		return 0;
	}
	int left = 0, right = nums.size() - 1;
	int temp;
	while (left != right)
	{
		if (nums[right]==val)
		{
			right--;
		}
		else if (nums[left]!=val)
		{
			left++;
		}
		else
		{
			temp = nums[left];
			nums[left] = nums[right];
			nums[right] = temp;
			left++;
		}
	}
	return nums[left] == val ? left : ++right;
}

int main() {
	vector<int> nums = { 3,2,2,3 };
	int n = removeElement(nums, 3);
	for (int i = 0; i < n; i++)
	{
		cout << nums[i] << endl;
	}
}
