class Solution {
public:
    int scoreOfParentheses(string S) {
        stack<int> st;
        st.push(0);
        for (char c : S) {
            if (c == '(') {
                st.push(0);
            } else {
                int cur = st.top();
                st.pop();
                int prev = st.top();
                st.pop();
                if (cur == 0)  {
                    st.push(1+prev);
                } else {
                    st.push(prev+2*cur);
                }
            }
            //cout << "new val " << st.top() << endl;

        }
        return st.top();
    }
};
