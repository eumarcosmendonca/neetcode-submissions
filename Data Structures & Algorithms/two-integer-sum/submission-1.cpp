#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = nums.size() - 1; j >= 0; j--)
            {
                if (nums[i] + nums[j] == target && i != j)
                {
                    return {i, j};
                }
            }
        }
        return {};
    }
};