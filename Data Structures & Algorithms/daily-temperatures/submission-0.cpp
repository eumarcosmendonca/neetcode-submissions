class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result(temperatures.size(), 0);
        std::stack<int> stack;
        for (int i = 0; i < temperatures.size(); i++) {
            while (!stack.empty() && temperatures[stack.top()] < temperatures[i]) {
                int index = stack.top();
                int subtraction = i - stack.top();
                result[index] = subtraction;
                stack.pop();
            }
            stack.push(i);
        }
        return result;
    }
};
