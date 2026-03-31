class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> dupe(nums.begin(),nums.end());
        if(dupe.size()==nums.size())
            return false;
        return true;    
    }
};