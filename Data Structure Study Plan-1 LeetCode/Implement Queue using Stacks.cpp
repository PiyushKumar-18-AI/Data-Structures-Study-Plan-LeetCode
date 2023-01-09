## 232. Implement Queue using Stacks

class MyQueue {
public:
    stack<int> stk;
    MyQueue() {
    }
    void push(int x) {
        stack<int> tmp;
        while(!stk.empty()){
            tmp.push(stk.top());
            stk.pop();
        }
        stk.push(x);
        while(!tmp.empty()){
            stk.push(tmp.top());
            tmp.pop();
        }
    }
    
    int pop() {
        int tmp = stk.top();
        stk.pop();
        return tmp;
    }

    int peek() {
        return stk.top();
    }

    bool empty() {
        return stk.empty();
    }
};
