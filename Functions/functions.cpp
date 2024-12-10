#include <iostream>
using namespace std;

/* USING VOID
void multiply(){
    cout << 3 * 2 << endl;
}
*/

int multiply(int a, int b){
    return a * b;
}

void multiplyAndLog(int a, int b){
    int result = multiply(a, b);
    cout << result << endl;
}

int main(){
    multiplyAndLog(3,2);
    multiplyAndLog(8,5);
    multiplyAndLog(90,45);
}