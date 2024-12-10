#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    fstream groceryFile("GroceryList.dat", fstream::out);
    groceryFile << "Almond Milk" << endl;
    groceryFile << "Eggs" << endl;
    groceryFile.close();
}