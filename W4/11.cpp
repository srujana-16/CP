// Array Implementation of Stack

class MyStack {
public:
    MyStack() {
        int* arr;
        int n = 30;
        arr = new int[n];
        int top = -1;
    }
    
    void push(int x) {
        if(top == n-1)
            return;

        top++;
        arr[top] = x;
    }
    
    int pop() {
        if(top == -1)
            return -1;

        int val = arr[top];
        top--;
        return val;
    }
    
    int top() {
        if(top == -1)
            return -1;

        int val = arr[top];
        return val;
    }
    
    bool empty() {
        if(top == -1)
            return true;
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