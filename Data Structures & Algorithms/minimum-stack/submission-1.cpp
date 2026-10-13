class MinStack {
public:

std::stack<int> main_stack;
std::stack<int> min_stack;

    MinStack() {
    }
    
    void push(int val) {
        main_stack.push(val);
        if (!min_stack.empty()) {
            if (val <= min_stack.top()) {
                min_stack.push(val);
            }
        }
        else {
            min_stack.push(val);
        }
    }
    
    void pop() {
        int auxiliar = main_stack.top();
        main_stack.pop();
        if (auxiliar == min_stack.top()) {
            min_stack.pop();
        }
    }
    
    int top() {
        return main_stack.top();
    }
    
    int getMin() {
        return min_stack.top();
    }
};
