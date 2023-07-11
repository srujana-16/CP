// Queues using Stacks
// using 1 stack - recursive method

class MyQueue {
public:

    stack<int> s1;
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        if(s1.empty())
            return -1;

        int x = s1.top();
        s1.pop();
        if(s1.empty())
            return x;
        
        int val = pop();
        s1.push(x);
        return val;
    }
    
    bool empty() {
        if(s1.empty())
            return true;
        return false;
    }
    
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */