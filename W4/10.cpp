// Array implementation of Queue

class MyQueue {
public:

    int n = 30;
    int* arr;
    arr = new int[n];
    int front = -1;
    int back = -1;
    
    void push(int x) {
        if(front == -1 && back == -1)
        {
            front++;
            back++;
            arr[back] = x;
        }
        else
        {
            back++;
            arr[back] = x;
        }
    }
    
    int pop() {
        if(front == -1 && back == -1)
            return -1;
        if(front == back)
        {
            int val = arr[front];
            front = -1;
            back = -1;
            return val;
        }
        int val = arr[front];
        front++;
        return val;
    }
    
    bool empty() {
        if(front == -1 && back == -1)
            return true;
        return false;
    }
    
};