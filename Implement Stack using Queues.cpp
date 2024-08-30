#include <queue>

class MyStack {
    queue<int> q1, q2;
public:
    MyStack() {
    }
    
    void push(int x) {
        // Push the new element to q2
        q2.push(x);
        
        // Move all elements from q1 to q2
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
        
        // Swap the names of q1 and q2
        swap(q1, q2);
    }
    
    int pop() {
        int val = q1.front();  
        q1.pop();             
        return val;           
    }
    
    int top() {
        return q1.front();    
    }
    
    bool empty() {
        return q1.empty();    
    }
};
