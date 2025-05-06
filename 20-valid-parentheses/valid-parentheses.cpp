class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto c: s){ // 
            if(st.empty()){ // F
                st.push(c);
            }else if((st.top() == '(' && c == ')') || 
                (st.top() == '{' && c == '}') ||
                (st.top() == '[' && c == ']')
             ){
                st.pop(); // delete -> (
            }else{
                st.push(c); // -> (( 
            }
        }
        if(st.empty()){
            return true;
        } else{
            return false;
        }
    }
};