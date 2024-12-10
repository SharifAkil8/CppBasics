#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

class badValueException : public logic_error{
private:
    int value;

public:
    badValueException(int n, string s = "") : logic_error(s){
        value = n;
    }

    void printVal(){
        cout << "The number " << value << " was used when it wasn't allowed." 
            << endl;
    }
};

void somethingToDo(int x){
    // Print the value if it is lesst than 3, throw an exception otherwise
    if (x > 3){
        throw(badValueException(x, "Bad value"));
    }
        else{
            cout << x << " is a good number." << endl;
        }  
}

int main(){
    try{
        somethingToDo(1);
        somethingToDo(5);
        somethingToDo(10);
    }

    catch(badValueException e){
        e.printVal();
    }
}