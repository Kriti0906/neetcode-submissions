class Solution {
public:

    string encode(vector<string>& strs) {
        string str;
        for(string s:strs){
            str+=to_string(s.length())+"#"+s;
        }
        return str;
    }

    vector<string> decode(string s) {
        vector<string> str;
        string st;
        int i=0;
         while (i < s.length()) {
            int j=i;
            while(s[j]!='#')
                j++;
            int l=stoi(s.substr(i,j-i));
            j++;
            st=s.substr(j,l);
            str.push_back(st);
            i=j+l;    
        }
        return str;
    }
};
