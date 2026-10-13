class Solution
{
public:
    bool hasDuplicate(vector<int> &nums)
    {
        unordered_set<int> tabela;
        for (int i = 0; i < nums.size(); i++)
        {
            if (tabela.count(nums[i]) > 0)
            {
                return true;
            }
            tabela.insert(nums[i]);
        }
        return false;
    }
};