#include <iostream>
using namespace std;

struct myStack
{
    int *arr;
    int cap;
    int top;
    myStack(int c)
    {
        cap = c;
        arr = new int[cap]; // Can Also use Vector
        top = -1;
    }

    void push(int x)
    {
        if (top == cap - 1)
            return;
        top++;
        arr[top] = x;
    }

    int pop()
    {
        if (top == -1)
            return INT16_MIN;
        int res = arr[top];
        top--;
        return res;
    }

    int peek()
    {
        if (top == -1)
            return INT16_MIN;
        return arr[top];
    }

    int size()
    {
        return top + 1;
    }

    bool isEmpty()
    {
        return top == -1;
    }
};

int main()
{
    myStack s(5);
    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20);
    s.push(25);
    s.push(30); // not added!
    cout << s.pop() << endl;
    cout << s.size() << endl;
    cout << s.peek() << endl;
    cout << s.isEmpty() << endl;
    return 0;
}