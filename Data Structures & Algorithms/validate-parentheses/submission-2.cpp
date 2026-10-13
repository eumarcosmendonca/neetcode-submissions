class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stack;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                stack.push(s[i]);
                continue;
            }
            else {
                if (!stack.empty()) {
                    if (s[i] == ')' && stack.top() == '(') {
                        stack.pop();
                        continue;
                    }
                    else if (s[i] == '}' && stack.top() == '{') {
                        stack.pop();
                        continue;
                    }
                    else if (s[i] == ']' && stack.top() == '[') {
                        stack.pop();
                        continue;
                    }
                }
                return false;
            }
        }
        if (!stack.empty()) {
            return false;
        }
        return true;
    }
};
