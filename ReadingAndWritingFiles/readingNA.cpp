#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    fstream nameAddress("address.txt", fstream::in);
    string s;
    while (getline(nameAddress,s)){     // reads each line until there are no more
        cout << s << endl;
    }
    nameAddress.close();   
}