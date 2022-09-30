#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		int p1 = 0, p2 = 0;
		vector<int> nums(m + n, 0);
		int cur;
		while (p1<m || p2<n) {
			if (p1==m)
			{
				cur = nums2[p2++];
			}
			else if (p2 == n) {
				cur = nums1[p1++];
			}
			else if (nums1[p1] < nums2[p2]) {
				cur = nums1[p1++];
			}
			else {
				cur = nums2[p2++];
			}
			nums[p1 + p2 - 1] = cur;
		}
		for (int i = 0; i < m+n; i++)
		{
			nums1[i] = nums[i];
		}
}

int main() {
	vector<int> nums1 = { 1,2,3,0,0,0 };
	int m = 3;
	vector<int> nums2 = { 2,5,6 };
	int n = 3;
	merge(nums1, m, nums2, n);
	for (int i = 0; i < nums1.size(); i++)
	{
		cout << nums1[i] << endl;
	}
}