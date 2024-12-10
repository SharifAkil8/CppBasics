#include <iostream>
using namespace std;

class vendingMachine{
    private:
    float price;
    float credit;
    float moneyCollected;
    int inventory;

    public:
    vendingMachine(){
        price = 0.0;
        credit = 0.0;
        moneyCollected = 0.0;
        inventory = 100;
        cout << "Created a new vending machine" << endl;
    }

    vendingMachine(int startingInventory){
        price = 0.0;
        credit = 0.0;
        moneyCollected = 0.0;
        inventory = startingInventory;
        cout << "Created a new vending machine" << endl;
    }

    vendingMachine(float initialPrice, int startingInventory){
        price = initialPrice;
        credit = 0.0;
        moneyCollected = 0.0;
        inventory = startingInventory;
        cout << "Created a new vending machine" << endl;
        cout << "Created a new vending machine with " << inventory 
        << " items at a cost of " << price << " each." << endl;
    }

    int numRemaining(){
        return inventory;
    }
};

int main(){

    cout << "How many items does the machine start with? ";
    int initialNum;
    cin >> initialNum;
    vendingMachine lobbyMachine(50.0,75);
    cout << "There are " << lobbyMachine.numRemaining() << " items." << endl;
}