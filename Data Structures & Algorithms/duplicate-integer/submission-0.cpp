class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> seen;
        
        for (int n : nums) {
            // seen.contains(n) in c++ 20 or we can use seen.count(n) for c++11/17
            if (seen.contains(n)) return true;
            seen.insert(n);
        }
        return false;
    }
};