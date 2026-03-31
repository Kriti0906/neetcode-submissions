class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> umap;
        for(string s: strs){
            string str=s;
            sort(str.begin(),str.end());
            umap[str].push_back(s);
        }
        vector<vector<string>> res;
        for(auto it:umap)
            res.push_back(it.second);
        return res;
    }
};
