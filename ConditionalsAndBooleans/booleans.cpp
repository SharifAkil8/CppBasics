#include <iostream>
using namespace std;

int main(){
    bool testTrue = true;
    bool testFalse = false;
    testTrue = 4;   // Any integer that != 0 is converted to a 1.
    cout << "Test True is: " << testTrue << endl;
    cout << "Test False is: " << testFalse << endl;
}