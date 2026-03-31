class Solution {
public:
    bool isAnagram(string s, string t) {
        int l1=s.length();
        int l2=t.length();
        if(l1!=l2)
            return false;
        char freq[26]={0};
        for(int i=0;i<l1;i++){
            freq[s[i]-'a']++;
            freq[t[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(freq[i]!=0)
                return false;
        }
        return true;               
    }
};
