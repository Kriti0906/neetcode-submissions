class Solution {
   public:
    string longestCommonPrefix(vector<string>& strs) {
        string pre = strs[0];
        int n = strs.size();
        for (int i = 1; i < n; i++) {
            while (strs[i].find(pre) != 0) {
                pre.pop_back();
                if (pre.empty()) return "";
            }
        }
        return pre;
    }
};