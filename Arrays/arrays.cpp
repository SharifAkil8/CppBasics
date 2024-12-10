#include <iostream>
using namespace std;

void membersOfTeam();
void arrayTesting();
void money();
void twoDArray();

int main(){

    int temps[20];
    int countTemps = 0;
    int currentTemp = 0;
    int totalTemp = 0;
    cout << "Enter a temperature: ";
    cin >> currentTemp;
    while (currentTemp < 200){
        temps[countTemps] = currentTemp;    // countTemps is initialized to 0 => temps[0], then temps[1], temps[2], and so on.
        totalTemp += currentTemp;
        countTemps++;
        cout << "Enter a temperature. Enter > 200 when done: ";
        cin >> currentTemp;
    }
    float average = (float)totalTemp / (float)countTemps;   // (float) is needed to compute average, since average is float.
    cout << "The average temperature was " << average << endl;
    
    int i;
    for (i = 0; i < countTemps; i++){
        if (temps[i] > average){
            cout << temps[i] << " was above the average temperature." << endl;
        }
    }    

    cout << "membersOfTeam function output:" << endl;
    membersOfTeam();
    cout << "arrayTesting function output:" << endl;
    arrayTesting();
    cout << "money function output:" << endl;
    money();
    cout << "twoDArray function output:" << endl;
    twoDArray();
}

void membersOfTeam(){
    int j;
    int teamMembers[5] = {5,6,4,5,4};
    for (j = 0; j < 5; j++){
        cout << teamMembers[j] << endl;
    }
}

void arrayTesting(){
    int testArray[20];
    testArray[0] = 10;
    testArray[1] = 20;
    testArray[2] = 25;
    cout << testArray[0] << " " << testArray[1] << " " << testArray[2] << endl;
}

void money(){
    int playerMoney[20];
    int n;
    for (n = 0; n < 4; n++){
        playerMoney[n] = 200;
        cout << playerMoney[n] << endl;
    }
}

// void yearMonthDay(){
//     int year[100];
//     int month[100];
//     int day[100];
//     year[0] = 2000;
//     month[0] = 1;
//     day[0] = 1;
//     year[1] = 2007;
//     month[1] = 2;
//     day[1] = 12;
// }

void twoDArray(){
    double accounts[5][3];
    int k, l;
    for (k = 0; k < 5; k++){
        for (l = 0; l < 3; l++){
            accounts[k][l] = 0.0;
        }
    }
    accounts[3][1] = 1000.0;    // 4th person, 2nd account
    accounts[0][2] = 50.0;      // 1st person, 3rd account
    for (k = 0; k < 5; k++){
        for (l = 0; l < 3; l++){
            cout << "Person " << k << ", account " << l << " has balance " << accounts[k][l] << endl;
        }
    }
}