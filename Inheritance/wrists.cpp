#include <iostream>
#include <string>
using namespace std;

class accessory{
public:
    float cost;
    float salePrice;

    // Default constructor
    accessory(){
        cost = 0.0;
        salePrice = 0.0;
    }

    // Non-default constructor
    accessory(float c, float p){
        cost = c;
        salePrice = p;
    }
};

class rubberWristband : public accessory{
public:
    string color;
    string message;

    // Default constructor
    rubberWristband() : accessory(){
        color = "";
        message = "";
    }

    // Non-default constructor
    rubberWristband(float c, float p, string col, string mess) : accessory(c,p){
        color = col;
        message = mess;
    }
};


int main(){
    rubberWristband birthdayBand(0.20, 2.00, "Yellow", "It's my birthday!");
    rubberWristband bridgesBand(0.20, 0.50, "Black", "Support bridges - your life depends on them.");
}