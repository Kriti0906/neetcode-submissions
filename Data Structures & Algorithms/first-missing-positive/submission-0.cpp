class Solution {
   public:
    int firstMissingPositive(vector<int>& nums) {
        map<int, int> umap;
        int n=1;
        for (int i = 0; i < nums.size(); i++){
            if(umap[nums[i]]>0)
                umap[nums[i]]++;
        }
        for(auto it:umap){
            if(it.first==n)
                n++;
            else if(it.first>n)
                break;
        }
        return n;
    }
};