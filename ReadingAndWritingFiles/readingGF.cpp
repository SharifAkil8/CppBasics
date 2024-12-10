#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    
    fstream groceryFile("GroceryList.dat", fstream::in);
    string s;
    while (getline(groceryFile,s)){     // reads entire line
        cout << s << endl;
    }
    // groceryFile >> s reads until white space
    groceryFile.close();
}

// void fileActions(){
//     Open file for reading
//     fstream dataFile("Test.dat", fstream::in);

//     Open file for writing, exisiting data will be overwritten
//     fstream dataFile("Test.dat", fstream::out);

//     Open file for appending
//     fstream dataFile("Test.dat", fstream::app);

//     Delete file contents and open for writing
//     fstream dataFile("Test.dat", fstream::out | fstream::trunc);

//     Open file for writing at end of file
//     fstream dataFile("Test.dat", fstream::out | fstream::ate);

//     Open file for reading binary data
//     fstream dataFile("Test.dat", fstream::in | fstream::binary);
// }