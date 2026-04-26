class MinStack {
public:
    stack<int> MinSt;
    stack<int> st;

    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);

        if (MinSt.empty() || val <= MinSt.top()) {
            MinSt.push(val);
        }
    }
    
    void pop() {
        if(st.top() == MinSt.top()){
            MinSt.pop();
        }
        st.pop();

    }
    
    int top() {
        if (st.empty()) return -1;
        return st.top();
    }
    
    int getMin() {
        if (MinSt.empty()) return -1;
        return MinSt.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
