#include <iostream>
using namespace std;

class vendingMachine{
private:
    float price = 1.0;
    float moneyCollected = 0.0;
    
public:
    float credit = 0.0;
    int inventory = 0;

    int numRemaining(){
        return inventory;
    }

    void restock(int newNum){
        inventory = newNum;
    }

    void depositMoney(float amount){
        credit += amount;
        cout << "Current credit is: " << credit << endl;
    }

    float returnChange(){
        float amtToReturn;
        amtToReturn = credit;
        credit = 0;
        cout << "Returning " << amtToReturn << " in change." << endl;
        return amtToReturn;
    }

    bool vend(){
        if (credit < price){
            cout << "Please deposit more money" << endl;
            return false;
        }   
            else if (inventory <= 0){
                cout << "Sold out." << endl;
                return false;
            }   
                else{
                    credit -= price;
                    moneyCollected += price;
                    cout << "Vending an item" << endl;
                    inventory--;
                    returnChange();
                    return true; 
                }
    }
};

int main(){
    vendingMachine lobbySodaMachine;
    lobbySodaMachine.inventory = 200;
    lobbySodaMachine.restock(200);
    cout << "Items in stock: " << lobbySodaMachine.inventory << endl;

    lobbySodaMachine.credit = 0.0;
    lobbySodaMachine.depositMoney(0.25);
    lobbySodaMachine.depositMoney(0.25);
    lobbySodaMachine.depositMoney(0.60);

    if (lobbySodaMachine.vend()){
        cout << "We got an item." << endl;
    }
        else{
            cout << "No item." << endl;
        }
    cout << "There are " << lobbySodaMachine.numRemaining() << " items left." << endl;
}