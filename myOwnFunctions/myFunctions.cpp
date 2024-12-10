#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int wordCount(string strToCount){
    stringstream ss(strToCount);
    int count = 0;
    string word;
    while (!(ss.eof())){
        ss >> word;
        count++;
    }
    return count;
}

int findLargest(vector<int> v){
    int largest = v[0];
    for (int i = 0; i < v.size(); i++){
        if (v[i] > largest) largest = v[i];
    }
    return largest;
}

int main(){
    string s = "This string has 5 words";
    cout << "There are " << wordCount(s) << " words in the string" << endl;

    cout << "FIND LARGEST OUTPUT FUNCTION" << endl;
    vector<int> testData;
    testData.push_back(12);
    testData.push_back(35);
    testData.push_back(21);
    testData.push_back(10);
    testData.push_back(18);
    int largeOne = findLargest(testData);
    cout << largeOne << endl;
}