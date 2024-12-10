#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    fstream nameAddress("address.txt", fstream::out);
    nameAddress << "Sharif Akil" << endl;
    nameAddress << "600 N 15th St" << endl;
    nameAddress.close();   
}