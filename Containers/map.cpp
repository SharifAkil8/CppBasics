#include<iostream>
#include<map>
#include<string>
using namespace std;

void dictionary();

int main(){
    map<string, int> numAnimals;
    numAnimals["cat"] = 12;
    numAnimals["dog"] = 23;
    numAnimals["rabbit"] = 2;

    string whichAnimal;
    cout << "Which animal do you want a count of? ";
    cin >> whichAnimal;
    if (numAnimals.count(whichAnimal) > 0){
        cout << "There are " << numAnimals[whichAnimal]
            << " in the shelter." << endl;
    }
        else{
            cout << "That animal is not in the shelter." << endl;
        }

    cout << "DICTIONARY OUTPUT" << endl;
    dictionary();
}

void dictionary(){
    map<string, string> dictionaryMap;
    dictionaryMap["rock"] = "An object that breaks scissors";
    dictionaryMap["paper"] = "An object that covers rocks";
    dictionaryMap["scissors"] = "An object that cuts paper";

    for (auto& iter : dictionaryMap){
        cout << iter.first << ": " << iter.second << endl;
    }
}