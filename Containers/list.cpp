#include <iostream>
#include <string>
#include <list>
using namespace std;

int main(){
    list<string> instructions;
    instructions.push_back("Get bread");
    instructions.push_back("Put jelly");
    instructions.push_back("Put two halves together");
    list<string>::iterator insertSpot;
    insertSpot = instructions.begin();      // Refers to first element
    insertSpot++;   // Refers to second element
    instructions.insert(insertSpot, "Put PB");
    for (auto iter = instructions.begin(); iter != instructions.end(); iter++){
        cout << *iter << endl;
    }
}