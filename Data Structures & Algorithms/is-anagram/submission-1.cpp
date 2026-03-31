class Solution {
public:
    bool isAnagram(string s, string t) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        transform(t.begin(), t.end(), t.begin(), ::tolower);
        int l1=s.length();
        int l2=t.length();
        if(l1!=l2)
            return false;
        char freqs[26]={0}, freqt[26]={0};
        for(int i=0;i<l1;i++)
            freqs[s[i]-'a']++;
        for(int i=0;i<l2;i++)
            freqt[t[i]-'a']++; 
        for(int i=0;i<26;i++)
            if(freqs[i]!=freqt[i])
                return false;
        return true;               
    }
};
