#include <iostream>
#include <string>
using namespace std;

void bDay();
void sSL();
void comparingStrings();
void emptyFunc();
void findFunc();
void subStr();

int main(){
    string greeting;
    greeting = "Hello World!";
    cout << greeting << endl;

    string firstName, color;
    cout << "What is your name? ";
    getline(cin,firstName);
    cout << "Hi, " << firstName << endl;
    cout << "What is your fav color? ";
    getline(cin,color);
    cout << color << endl;

    cout << "BIRTHDAY FUNCTION OUTPUT" << endl;
    bDay();
    cout << "SSL FUNCTION OUTPUT" << endl;
    sSL();
    cout << "COMPARING STRINGS FUNCTION OUTPUT" << endl;
    comparingStrings();
    cout << "EMPTY FUNCTION OUTPUT" << endl;
    emptyFunc();
    cout << "FIND FUNCTION OUTPUT" << endl;
    findFunc();
    cout << "SUBSTRING FUNCTION OUTPUT" << endl;
    subStr();
}

void bDay(){
    string s;
    s = "Happy ";
    s += "Birthday";
    cout << s << endl;
}

void sSL(){
    string s = "This is a string.";
    cout << "First character is: ";
    cout << s[0] << endl;
    cout << "Fourth character is: ";
    cout << s.at(3) << endl;
    cout << "String size is: " << s.size() << endl;
    cout << "String length is: " << s.length() << endl;
}

void comparingStrings(){
    string s1,s2;
    cout << "Enter first string: ";
    getline(cin, s1);
    cout << "Enter second string: ";
    getline(cin, s2);
    if (s1 > s2){
        cout << "\"" << s1 << "\" is greater than \"" << s2 << "\"" << endl;
    }   else{
            cout << "\"" << s1 << "\" is NOT greater than \"" << s2 << "\"" << endl;
        }
}

void emptyFunc(){
    string newsToday = "";
    if (newsToday.empty()){
        cout << "No good news" << endl;
    }
}

void findFunc(){
    string c1 = "Test string";
    string c2 = "string";
    cout << "First occurrence occurs at position: " << c1.find(c2) << endl;
}

void subStr(){
    string a = "This string is not a knot";
    string b = a.substr(7,4);   // from position 7, 4 characters
    cout << "The substring is: " << b << endl;
}

/*
\n Newline
\t tab
\0 null
\" quoation mark
\' apostrophe
\\ backslash
*/