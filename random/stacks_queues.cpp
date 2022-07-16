#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main() {
    //stack->push() ,pop()  ,top(),empty(),size()
    //queue->push(),pop(),front(),back(),size(),empty()
    //no iterators in this
    //stack is LIFO ->last in first out
    //queue is FIFO ->first in first out
    stack<int> S;
    S.push(5);
    S.push(2);
    S.push(1);
    cout << S.size() << " " << S.top() ;
    // S.pop();
    cout << endl;
    // cout << S.size() << " " << S.top();
    // cout << endl;
    //printing out elements
    while (S.empty() == false)
    {
        cout << S.top() << " ";
        S.pop();
    }
    cout << endl;
    queue<char> q;
    q.push('a');
    q.push('b');
    q.push('c');
    cout << q.size() << " " << q.front() << " " << q.back();
    cout << endl;
    q.pop();//in queue first element is removed
    cout << q.size() << " " << q.front() << " " << q.back();
    cout << endl;
    cout << q.empty();//returns 0->false or //1->true
    cout << endl;

    return 0;
}
