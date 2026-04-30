class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> umap;
        int l=0,maxlen=0;
        for(int r=0;r<s.length();r++){
            if(umap.find(s[r])!=umap.end() && umap[s[r]]>=l)
                l=umap[s[r]]+1;
            umap[s[r]]=r;
            maxlen=max(maxlen,r-l+1);
        }
        return  maxlen;
    }
};
