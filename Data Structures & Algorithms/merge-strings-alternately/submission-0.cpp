class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int l1=word1.length();
        int l2=word2.length();
        string out="";
        int i=0;
        while(i<l1 && i<l2){
            out+=word1[i];
            out+=word2[i];
            i++;
        }
        if(i==l1){
            for(int j=i;j<l2;j++){
                out+=word2[j];
            }
        }
        else{
            for(int j=i;j<l1;j++){
                out+=word1[j];
            }
        }
        return out;
    }
};