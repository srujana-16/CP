// Linked List implementation of Queue

class node 
{
public:
    int val;
    node* next;
    node(int val)
    {
        this->val = val;
        next = NULL;
    }
};

class MyQueue {
public:

    node* front = NULL;
    node* back = NULL;
    
    void push(int x) {
        node* newnode = new node(x);
        if(front == NULL && back == NULL)
        {
            front = newnode;
            back = newnode;
        }
        else
        {
            back->next = newnode;
            back = newnode;
        }
    }
    
    int pop() {
        if(front == NULL && back == NULL)
            return -1;
        if(front == back)
        {
            int val = front->val;
            front = NULL;
            back = NULL;
            return val;
        }
        int val = front->val;
        front = front->next;
        return val;
    }

    int peek()
    {
        if(front == NULL && back == NULL)
            return -1;
        return front->val;
    }
    
    bool empty() {
        if(front == NULL && back == NULL)
            return true;
        return false;
    }
    
};