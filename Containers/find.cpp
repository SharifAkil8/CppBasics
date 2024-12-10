#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> ages;
    ages.push_back(23);
    ages.push_back(21);
    ages.push_back(18);
    ages.push_back(22);
    ages.push_back(21);
    ages.push_back(19);
    ages.push_back(20);
    ages.push_back(19);
    ages.push_back(27);
    ages.push_back(22);
    vector<int>::iterator findval;
    int ageToFind;

    cout << "I have a list of ages of participants." << endl;
    while (true){
        cout << "What age do you want to find? ";
        cin >> ageToFind;
        findval = find(ages.begin(), ages.end(), ageToFind);
        if (findval != ages.end()){
            cout << "Found: " << *findval << endl;
        }
            else{
                cout << ageToFind << " Not found" << endl;
            }
    }
}