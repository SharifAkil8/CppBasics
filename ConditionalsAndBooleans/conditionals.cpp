#include <iostream>
using namespace std;

int main(){
    int age = 0;
    cout << "Enter your age: ";
    cin >> age;
    float price;
    if((age < 18) || (age >= 65)){
        cout << "You are eligible for discount!" << endl;
        price = 5.0f;
    }   else{   // An 'else' statement without brackets takes into account only the first command after it.
            cout << "You are not eligible for discount!" << endl;
            price = 7.5f;
        }   
    cout << "Your price is " << price << endl;

    float packageWeight = 5.0f;
    bool sendPriority = true;
    float shippingPrice;
    if(sendPriority){
        if(packageWeight < 3.5){
            shippingPrice = 10.0f;
        }   else{
                shippingPrice = packageWeight * 3.0;
            }
    }   else{
            shippingPrice = packageWeight * 1.5;
        }
    cout << "Your shipping price is " << shippingPrice << endl;
}