#include <iostream>
#include <string>
using namespace std;

class product{
public:
    float wholesaleCost;
    float retailCost;
};

class cup: public product{
public:
    float volume;
    string color;
};

class measuringCup: public cup{
public:
    bool metricUnits;
    int numGradations;
};

int main(){
    measuringCup plasticCup;
    plasticCup.wholesaleCost = 0.10;
    plasticCup.retailCost = 0.30;
    plasticCup.volume = 1000.0;
    plasticCup.color = "clear";
    plasticCup.metricUnits = true;
    plasticCup.numGradations = 10;

    cout << "The plastic cup costs " << plasticCup.wholesaleCost 
        << " to purchase and sells for " << plasticCup.retailCost << endl;
    cout << "It is " << plasticCup.color << " in color and has a volume of "
        << plasticCup.volume << endl;

    if (plasticCup.metricUnits){
        cout << "It has a total of " << plasticCup.numGradations
            << " markings in metric units." << endl;
    }
        else{
            cout << "It has a total of " << plasticCup.numGradations
                << " markings in English units." << endl;
        }
}