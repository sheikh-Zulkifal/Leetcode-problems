class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> myst;
        for (auto c : tokens) {
            if (c == "+") {
                int a = myst.top();
                myst.pop();
                int b = myst.top();
                myst.pop();
                myst.push(b + a);
            } else if (c == "-") {
                int a = myst.top();
                myst.pop();
                int b = myst.top();
                myst.pop();
                myst.push(b - a);
            } else if (c == "*") {
                int a = myst.top();
                myst.pop();
                int b = myst.top();
                myst.pop();
                myst.push(b * a);
            } else if (c == "/") {
                int a = myst.top();
                myst.pop();
                int b = myst.top();
                myst.pop();
                myst.push(b / a);
            } else {
                myst.push(stoi(c));
            }
        }
        return myst.top();
    }
};