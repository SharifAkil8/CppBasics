#include <sstream>
#include <iostream>
#include <string>
using namespace std;

void numbers();

int main(){
    stringstream wordReader;
    wordReader.str("Apple Banana Cherry");
    string firstWord;
    wordReader >> firstWord;
    cout << "First string read was: " << firstWord << endl;

    cout << "NUMBERS FUNCTION OUTPUT" << endl;
    numbers();
}

void numbers(){
    cout << "Enter several integers on one line: " << endl;
    string inputLine;
    getline(cin,inputLine);
    stringstream string_input(inputLine);
    int val;
    while (!(string_input.eof())){
        string_input >> val;
        cout << "You entered: " << val << endl;
    }
    
}