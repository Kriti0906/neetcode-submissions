class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        int a,b;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]!="+" && tokens[i]!="-" && tokens[i]!="*" && tokens[i]!="/")
                st.push(stoi(tokens[i]));
            else{
                a=st.top();
                st.pop();
                b=st.top();
                st.pop();
                if(tokens[i]=="+")
                    st.push(b+a);
                else if(tokens[i]=="-")
                    st.push(b-a);
                else if(tokens[i]=="*")
                    st.push(b*a);
                else if(tokens[i]=="/")
                    st.push(b/a);
            }
        }
        return st.top();
    }
};
