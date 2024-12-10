#include <iostream>
#include <vector>
using namespace std;

void age();
void size();
void sizeLoop();
void init();
void definedVector();
void resizeVector();
void resizeSizedVector();

int main(){
    vector<int> Victor;     // vector<type> name
    Victor.push_back(1);    // assign 1 to the end of Victor[0]
    Victor.push_back(2);
    Victor.push_back(3);
    cout << Victor[0] << " " << Victor[1] << " " << Victor[2] << " " << endl;

    cout << "AGE FUNCTION OUTPUT" << endl;
    age();
    cout << "SIZE FUNCTION OUTPUT" << endl;
    size();
    cout << "SIZE LOOP FUNCTION OUTPUT" << endl;
    sizeLoop();
    cout << "INIT FUNCTION OUTPUT" << endl;
    init();
    cout << "DEFINED VECTOR FUNCTION OUTPUT" << endl;
    definedVector();
    cout << "RESIZE VECTOR FUNCTION OUTPUT" << endl;
    resizeVector();
    cout << "RESIZE SIZED VECTOR FUNCTION OUTPUT" << endl;
    resizeSizedVector();
}

void age(){
    vector<int> ages;   // declaring vector ages of ints of size x
    int age;
    cout << "Enter age: ";
    cin >> age;
    while (age >= 0){
        ages.push_back(age);
        cout << "Enter another age: ";
        cin >> age;
    }
}

void size(){
    vector<int> v;      // declaring vector v of ints
    cout << "Initial size: " << v.size() << endl;
    v.push_back(1);     // 1st element value = 1
    v.push_back(2);     // 2nd element value = 2
    v.push_back(3);     // 3rd element value = 3
    cout << "Later size: " << v.size() << endl;     // output should be 3 (3 elements)
}

void sizeLoop(){
    vector<float> u;    // declaring vector u of ints
    u.push_back(10);    // 1st element value = 10
    u.push_back(20.0);  // 2nd element value = 20.0
    u.push_back(0.05);  // 3rd element value = 0.05
    int i;
    for (i = 0; i < u.size(); i++){
        cout << u[i] << " ";    // output should be: 10 20.0 0.05
    }
    cout << endl;
}

void init(){
    vector<int> w(3);   // declaring vector w of ints of size 3
    cout << "Initial vector : ";
    int j;
    for (j = 0; j < w.size(); j++){
        cout << w[j] << " ";    // output should be: 0 0 0
    }
    cout << endl;
}

void definedVector(){
    vector<int> x(3,10);   // x(size, value/s) declaring and initializing vector x of ints of size 3 
    cout << "Initial vector : ";
    int k;
    for (k = 0; k < x.size(); k++){
        cout << x[k] << " ";    // output should be: 10 10 10
    }
    cout << endl;
}

void resizeVector(){
    vector<int> y;   // declaring vector y of ints
    y.resize(5);
    cout << "Resized vector : ";
    int l;
    for (l = 0; l < y.size(); l++){
        cout << y[l] << " ";    // output should be: 0 0 0 0 0
    }
    cout << endl;
}

void resizeSizedVector(){
    vector<int> z(3);   // declaring vector z of ints of size 3
    z.resize(5,1);
    cout << "Resized vector : ";
    int m;
    for (m = 0; m < z.size(); m++){
        cout << z[m] << " ";    // output should be: 0 0 0 1 1
    }
    cout << endl;
}