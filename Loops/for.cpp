#include <iostream>
using namespace std;

void iTimesJ();
void counting();

int main(){
    float balance = 1000.0f;
    float payment = 100.0f;
    float interest = 0.05f;
    int numPayments;
    for(numPayments = 0; numPayments < 5; numPayments++){
        cout << "Balance after " << numPayments << " payment/s is: " << balance << endl;
        balance += balance * interest;
        balance -= payment;
    }

    cout << "iTimesJ function output:" << endl;
    iTimesJ();
    cout << "counting function output:" << endl;
    counting();
    /* If a variable is declared 'int' outside and inside of the scope/loop with different values, 
    then the j 'cout' outside the loop will output the outside the loop value for j, 
    and the j 'cout' inside the loop will output the inside the loop value for j.
    */
}

void iTimesJ(){
    int i, j;
    for (i = 1; i < 4; i++){
        for (j = 1; j < 4; j++){
            cout << i << " times " << j << " is " << i * j << endl;
        }
    }
}

void counting(){
    int n;
    for (n = 1; n < 4; n++){
        static int m = 1;   // static makes m not reset every time n iterates.
        cout << "In loop: " << n << " " << m << endl;
        m++;
    }
    cout << "After loop: " << n << endl;
}