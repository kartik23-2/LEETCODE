class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int maxlen = 0;

        for (char ch : s) {
            if (ch == '(') {
                st.push(ch);
                maxlen = max(maxlen, (int)st.size());
            } else if(ch == ')'){
                if(!st.empty())
                  st.pop();
            }
        }

        return maxlen;
    }
};