#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    fstream average("balances.txt", fstream::out);
    average << "5.46" << endl;
    average << "10.12" << endl;
    average << "25.25" << endl;
    average << "30.15" << endl;
    average << "13.66" << endl;
    average << "14.89" << endl;
    average << "23.54" << endl;
    average << "59.88" << endl;
    average << "67.95" << endl;
    average << "103.42" << endl;
    average << "15.24" << endl;
    average << "6.23" << endl;
    average << "3.03" << endl;
    average << "1.99" << endl;
    average.close();   
}