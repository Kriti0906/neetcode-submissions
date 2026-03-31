class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> umap;
        for(int i=0;i<nums.size();i++){
            if(umap.find(nums[i])!=umap.end()){
                umap[nums[i]]++;
            }
            else{
                umap.insert({nums[i],1});
            }
        }
        vector<pair<int,int>> freq;
        for(auto it:umap){
            freq.push_back({it.second,it.first});
        }
        sort(freq.begin(),freq.end(),greater<pair<int,int>>());
        vector<int> res;
        for(int i=0;i<k;i++){
            res.push_back(freq[i].second);
        }
        return res;
    }
};
