#include <iostream>
#include <string>
using namespace std;

typedef pair<int, string> person;
void usingTypeDef();

int main(){
    pair<int, string> p;
    p.first = 20;
    p.second = "Sharif";
    cout << p.second << " is " << p.first << " years old." << endl;

    cout << "USING TYPE DEF FUNCTION OUTPUT" << endl;
    usingTypeDef();
}

void usingTypeDef(){
    person p;
    p = make_pair(20, "Sharif");
    cout << p.second << " is " << p.first << " years old." << endl;
}