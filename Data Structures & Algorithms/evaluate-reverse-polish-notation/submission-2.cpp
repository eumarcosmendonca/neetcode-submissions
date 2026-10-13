class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        std::stack<int> stack;
        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/") {
                int number2 = stack.top();
                stack.pop();
                int number1 = stack.top();
                stack.pop();
                if (tokens[i] == "+") stack.push(number1 + number2);
                else if (tokens[i] == "-") stack.push(number1 - number2);
                else if (tokens[i] == "*") stack.push(number1 * number2);
                else if (tokens[i] == "/") stack.push(number1 / number2);
            }
            else {
                stack.push(std::stoi(tokens[i]));
            }
        }
        return stack.top();
    }
};
