#include <iostream>
using namespace std;

void calories();
void varSize();
void mathFloat();

int main(){
    int variable = 8;
    cout << "Int value " << variable << endl;
    variable = 20;
    cout << "Int value after reassigning a new value to it: " << variable << endl;

    int weeks = 20;
    int days = 7 * weeks;
    cout << "There are " << days << " days in " << weeks << " weeks" << endl;

    char a = 'A';
    cout << "Character " << a << endl;
    
    short b = 65;
    cout << "Short value " << b << endl;

    float var = 5.5f;
    cout << "Float value " << var << endl;

    double varr = 3.2;
    cout << "Double value " << varr << endl;

    bool t = true;  // 1
    cout << "Bool true: " << t << endl;
    bool f = false; // 0
    cout << "Bool false: " << f << endl;

    cout << "calories function output:" << endl;   
    calories();
    cout << "varSize function output:" << endl;
    varSize();
    cout << "mathFloat function output:" << endl;
    mathFloat();

}

void calories(){
    int carbGrams;
    int proteinGrams;
    int fatGrams;
    cout << "Enter the number of grams of carbs, protein, and fat separated by spaces" << endl;
    cin >> carbGrams >> proteinGrams >> fatGrams;
    int calories;
    calories = 4 * carbGrams + 4 * proteinGrams + 9 * fatGrams;
    cout << "There are " << calories << " calories in this dish" << endl;
}

void varSize(){
    cout << "Variable int has " << sizeof(int) << " bytes" << endl;      // 4 bytes
    cout << "Variable double has " << sizeof(double) << " bytes" << endl;   // 8 bytes
    cout << "Variable float has " << sizeof(float) << " bytes" << endl;    // 4 bytes
    cout << "Variable char has " << sizeof(char) << " bytes" << endl;     // 1 byte
    cout << "Variable short has " << sizeof(short) << " bytes" << endl;    // 2 bytes
    cout << "Variable bool has " << sizeof(bool) << " bytes" << endl;     // 1 byte
}

void mathFloat(){
    float x = 3.0;
    float y = x;
    float z = x * y;
    x = 5.5;
    cout << "x = " << x << " y = " << y << " z = " << z << endl;
}