#include <iostream>
using namespace std;

class hero{
public:
    string name;
    string characteristic;
};

int main(){
    int x = 3;
    int* y;     // pointer declared
    y = &x;     // y gets the address of x, points to x
    cout << *y << endl;     // outputting the value that y is pointing to
    *y = 5;     // x address is 5 now
    cout << x << endl;

    hero h;
    h.name = "Hercules";
    h.characteristic = "strength";
    hero* laboringHero;
    laboringHero = &h;
    cout << laboringHero->name << " has the characteristic of "
        << laboringHero->characteristic << endl;
    cout << (*laboringHero).name << " has the characteristic of "
        << (*laboringHero).characteristic << endl;
}

// could also write y[0], instead of *y