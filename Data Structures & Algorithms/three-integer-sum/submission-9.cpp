class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int k = nums.size() - 1;
        vector<vector<int>> resultado;
        for (int i = 0; i < nums.size() - 1; i++) {
            int j = i + 1;
            if (i > 0) {
                if (nums[i] == nums[i - 1]) continue;
            }
            while (j < k) {
                if (nums[i] == -(nums[j] + nums[k])) {
                    resultado.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                    while (j < k && nums[j] == nums[j - 1]) j++;
                    while (k > j && nums[k] == nums[k + 1]) k--;
                }
                else {
                    int soma = nums[i] + nums[j] + nums[k];
                    if (soma > 0) k--;
                    else j++;
                }
            }
            k = nums.size() - 1;
        }
        return resultado;
    }
};
