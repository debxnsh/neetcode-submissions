class Solution {
public:
    bool isValid(string s) {
        stack<char> b;

        for (char i : s) {

            if (i == ')') {
                if (b.empty() || b.top() != '(') return false;
                b.pop();
            }
            else if (i == '}') {
                if (b.empty() || b.top() != '{') return false;
                b.pop();
            }
            else if (i == ']') {
                if (b.empty() || b.top() != '[') return false;
                b.pop();
            }
            else {
                b.push(i);
            }
        }

        return b.empty();
    }
};