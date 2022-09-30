#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
//#include "twoSum_1.h"

using namespace std;

	vector<int> twoSum(vector<int>& nums, int target) {
		unordered_map<int, int> hashtable;
		for (int i = 0; i < nums.size(); i++)
		{
			auto it = hashtable.find(target - nums[i]);
			if (it != hashtable.end())
			{
				return { it->second,i };
			}
			hashtable[nums[i]] = i;
		}
		return {};
	}

	int main(void) {
		vector<int> nums = { 3,2,4 };
		int target = 6;
		vector<int> ans = twoSum(nums, target);
		for (int i = 0; i < ans.size(); i++)
		{
			cout << ans[i] << endl;
		}
		return 0;
	}