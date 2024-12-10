#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;
    s.push(10);     // Bottom
    s.push(15);
    s.push(20);     // Top
    while (!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }   
}