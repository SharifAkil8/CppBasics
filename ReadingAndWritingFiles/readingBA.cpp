#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    fstream bankFile("balances.txt", fstream::in);
    float f;
    float total = 0.0;
    int numVals = 0;
    for (bankFile >> f /* Initializing */; !(bankFile.eof()); bankFile >> f /* Read new value each iteration */){
        total += f;     // each value read is added to total
        numVals++;      // amount of values read
    }
    bankFile.close();
    cout << "The average is: " << total / numVals << endl;   
}