#include <iostream>
#include <vector>
using namespace std;

int findLargestElement(vector<int>& nums) {
    int maxElement = nums[0]; 
    for (int num : nums) {
        if (num > maxElement) {
            maxElement = num;
        }
    }
    return maxElement;
}

int main() {
    vector<int> nums = {10, 20, 5, 40, 30};
    cout << "Largest Element: " << findLargestElement(nums) << endl;
    return 0;
}
