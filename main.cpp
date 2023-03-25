#include<iostream>
#include<vector>
using namespace std;
class solution {
public: 
	int search(vector<int>& nums, int target) {
		int left = 0;
		int right = nums.size() - 1;
		while (left <= right) {
			int middle = (left + right) / 2;
			if (nums[middle] > target)
				right = middle - 1;
			else if (nums[middle] < target)
				left = middle + 1;
			else {
				cout << middle << endl;
				return middle;
			}
				
		}
		return -1;//未找到
	}
};

int main() {
	vector<int>arr{ 1,2,3,5,8,10,13,17,20,21 };
	solution a;
	a.search(arr,5);
	return 0;
}
