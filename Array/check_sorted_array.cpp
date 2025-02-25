#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> &nums)
{
    for (size_t i = 1; i < nums.size(); i++)
    {
        if (nums[i] < nums[i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5}; // Sorted example
    cout << (isSorted(nums) ? "Array is sorted" : "Array is not sorted") << endl;
    return 0;
}
