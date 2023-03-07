/*
This problem can be done using one queue or two queues

We will do the problem using two queues
*/

class MyStack
{
public:
    queue<int> q1;
    queue<int> q2;
    MyStack()
    {
    }

    void push(int x)
    {
        // put element in q2
        q2.push(x);
        // now put every elements from q1 to q2
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        // now put every thing back from q2 to q1
        while(!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
    }

    int pop()
    {
        q1.pop();
    }

    int top()
    {
        q1.front();
    }

    bool empty()
    {
        if(q1.empty()) return true;
        else return false;
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