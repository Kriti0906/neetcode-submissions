class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prod;
        for(int i=0;i<nums.size();i++){
            int p=1;
            for(int j=0;j<nums.size();j++){
                if(i!=j){
                    p*=nums[j];
                }
            }
            prod.push_back(p);
        }
        return prod;
    }
};
