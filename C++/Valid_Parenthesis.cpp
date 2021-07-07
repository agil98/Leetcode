class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (auto c : s){
            if (st.empty()){
                st.push(c);
                continue;
            }
            if (c == ')'){
               if (st.top() != '(') return false;
               else st.pop();
            }
           else if (c == ']'){
                if (st.top() != '[') return false;
                else st.pop();
            }
            else if (c == '}'){
                if (st.top() != '{') return false;
                else st.pop();
            }
            else 
                st.push(c);
        }
        if (st.empty())
            return true;
        else
            return false;
    }
};