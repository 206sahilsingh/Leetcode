class MinStack {
    stack<int>st;
    stack<int>minst;
public:
    /*MinStack() {
      stack<int>st;
      stack<int>minst;  
    }*/
    
    void push(int value) {
        st.push(value);

        if(minst.empty())
           minst.push(value);

        else
        minst.push(min(value,minst.top()));   
    }
    
    void pop() {
        if(st.empty())
        return;

        st.pop();
        minst.pop();
    }
    
    int top() {
        if(st.empty())
        return -1;

        return st.top();
        
    }
    
    int getMin() {
        if(minst.empty())
        return -1;
        return minst.top();
        
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