// Stack using Queue
// using 1 queue
// push operation is O(n) - costly
// while pushing, pop all elements from queue and push them again

class MyStack {
    queue<int> q1;
    int N;

public:
    MyStack() {
    }
    
    void push(int x) {
        int N = q1.size();
        q1.push(x);
        while(N--)
        {
            q1.push(q1.front());
            q1.pop();
        }
    }
    
    int pop() {
        
        int n = top();
        q1.pop();
        N--;
        return n;
    }
    
    int top() {
        int top = q1.front();
        return top;
    }
    
    bool empty() {
        if(q1.empty())
            return true;
        return false;
        
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */