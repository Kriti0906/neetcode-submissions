class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>umap;
        int maxc=INT_MIN,maxe;
        for(int i=0;i<nums.size();i++){
            umap[nums[i]]++;
        }
        for(auto it:umap){
            if(it.second>maxc){
                maxc=it.second;
                maxe=it.first;
            }
        }
        return maxe;
    }
};