#include <iostream>
#include <vector>
using namespace std;

void moveZerosToEnd(vector<int> &nums)
{
    int nonZeroIndex = 0; // Points to where non-zero elements should be placed
    for (int num : nums)
    {
        if (num != 0)
        {
            nums[nonZeroIndex++] = num;
        }
    }
    // Fill the rest of the array with zeros
    while (nonZeroIndex < nums.size())
    {
        nums[nonZeroIndex++] = 0;
    }
}

int main()
{
    vector<int> nums = {0, 1, 0, 3, 12};
    moveZerosToEnd(nums);

    cout << "Array after moving zeros: ";
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
