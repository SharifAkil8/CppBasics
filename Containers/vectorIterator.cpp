#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(15);
    v.push_back(20);
    vector<int>::iterator myIterator;
    myIterator = v.begin();
    while (myIterator != v.end()){
        cout << "This iterator refer to: " << *myIterator << endl;
        myIterator++;
    }   
}