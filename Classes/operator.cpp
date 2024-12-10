#include <iostream>
using namespace std;

class lightbulb{
    int wattsUsed;
    int lumens;
    int temperature;

public:
    lightbulb(){
        wattsUsed = 60;
        lumens = 500;
        temperature = 2700;
    }

    friend ostream& operator <<(ostream&, const lightbulb&);
};

ostream& operator <<(ostream& s, const lightbulb& b){
    s << b.wattsUsed << " " << b.lumens << " " << b.temperature;
    return s;
}

int main(){
    lightbulb bulb;
    cout << bulb << endl;
}