#include <iostream>
#include <string>
#include <tuple> // Include the correct header for tuples
using namespace std;

int main(){
    tuple<string, string, int, double, double> c;
    c = make_tuple("James Smith", "Cubs", 22, 73.5, 182.1);
    cout << get<0>(c) << " is " << get<3>(c) 
        << " inches tall and weighs " << get<4>(c) 
        << " pounds." << endl;
}