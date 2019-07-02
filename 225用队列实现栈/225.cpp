#include <bits/stdc++.h>
using namespace std;

class MyStack {
public:
    /** Initialize your data structure here. */
    queue<int>myQue1;
    queue<int>myQue2;
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        // 往一个空队列中存储
        if(myQue1.empty())
        {
            myQue1.push(x);
            while(!myQue2.empty())
            {
                myQue1.push(myQue2.front());
                myQue2.pop();
            }
        }else
        {
            myQue2.push(x);
            while(!myQue1.empty())
            {
                myQue2.push(myQue1.front());
                myQue1.pop();
            }
        }
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        if(empty())
        {
            cout << "队列为空" << endl;
            return -1;
        }
        int ret;
        // 从二号队列中拿值，如果二号队列为空就反转一号
        if(myQue2.empty())
        {
            ret = myQue1.front();
            myQue1.pop();

        }else
        {
            ret = myQue2.front();
            myQue2.pop();
        }
        return ret;
    }
    
    /** Get the top element. */
    int top() {
        int ret = myQue2.empty() ?myQue1.front() : myQue2.front();
        return ret;
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return myQue1.empty() && myQue2.empty();
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

int main()
{
    return 0;
}