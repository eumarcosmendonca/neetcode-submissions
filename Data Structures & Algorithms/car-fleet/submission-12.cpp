class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        std::vector<std::pair<int, int>> pairs;
        std::stack<double> stack;
        for (int i = 0; i < position.size(); i++) {
            pairs.push_back({position[i], speed[i]});
        }
        std::sort(pairs.begin(), pairs.end());
        for (int i = position.size() - 1; i >= 0; i--) {
            double first = pairs[i].first;
            double second = pairs[i].second;
            double equation = (target - first) / second;
            if (stack.empty()) {
                stack.push(equation);
                continue;
            }
            else if (stack.top() < equation) {
                stack.push(equation);
            }
        }
        return stack.size();
    }
};
