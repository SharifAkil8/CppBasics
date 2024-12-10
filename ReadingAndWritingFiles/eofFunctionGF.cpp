#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    fstream groceryFile("GroceryList.dat", fstream::in);
    string s;
    // groceryFile >> s reads until white space
    groceryFile >> s;   // Initialization, read string
    while (!(groceryFile.eof())){   // until we reach the end of file
        cout << s << endl;
        groceryFile >> s;           // read string
    }
    groceryFile.close();
}