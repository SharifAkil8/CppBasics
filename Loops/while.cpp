#include <iostream>
using namespace std;

void numIteration();
void ageAverage();

int main(){
    float balance = 1000.0f;
    float payment = 100.0f;
    float interest = 0.05f;
    int numPayments = 0;
    while(balance > 0.0){
        balance += balance * interest;
        balance -= payment;
        numPayments++;
        cout << "Balance after " << numPayments << " payment/s is: " << balance << endl;
    }

    cout << "numIteration function output:" << endl;
    numIteration();
    cout << "ageAverage function output:" << endl;
    ageAverage();

}

void numIteration(){
    int num = 0;
    while(num <= 10){
        cout << num << endl;
        num++;
    }
}

void ageAverage(){
    int sumOfAges = 0;
    int numOfPeople = 0;
    int ageOfPerson = 0;
    cout << "Enter the age of the first person: ";
    cin >> ageOfPerson;
    while(ageOfPerson >= 0){
        sumOfAges += ageOfPerson;
        numOfPeople++;
        cout << "Number of people: " << numOfPeople << endl;
        cout << "Enter the age of the next person, or enter -1 if there are no more people:";
        cin >> ageOfPerson;
    }
    cout << "The average is: " << (float)sumOfAges / (float)numOfPeople << endl;    // Converting int to float.
}