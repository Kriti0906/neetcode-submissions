class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest=0;
        unordered_set<int> s(nums.begin(),nums.end());
        for(int i:s){
            if(s.find(i-1)==s.end()){
                int curr=i;
                int c=1;
                while(s.find(curr+1)!=s.end()){
                    curr++;
                    c++;
                }
                longest=max(longest,c);
            }
        }
        return longest;
    }
};
