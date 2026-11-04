class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> values_idx;
        for (int i = 0; i < nums.size(); i++) {
            
            int difference = target - nums[i];
            if (values_idx.contains(difference)) {
                return {values_idx.at(difference), i};
            }
            values_idx[nums[i]] = i;
        }
        return {};
    }
};