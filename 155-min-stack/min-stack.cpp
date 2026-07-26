class MinStack {
public:
stack<long long> s;
stack<long long> m;
    MinStack() {
        
    }
    
    void push(int value) {
        
        if(m.empty() || value<=m.top()){
            m.push(value);
        }
        s.push(value);
    }
    
    void pop() {
        if(s.top()==m.top()){
            s.pop();
            m.pop();
        }
        else s.pop();       
    }
    
    int top() {
        return s.top();        
    }
    
    int getMin() {
        return m.top();        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */