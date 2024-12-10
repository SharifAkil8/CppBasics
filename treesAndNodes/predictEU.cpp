#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

int main(){
    /*  Read data   */

    /*  Read past electricity data  */
    fstream electricFile;
    electricFile.open("meterReadings.dat", fstream::in);
    string date;
    int meter;
    electricFile >> date >> meter;
    while (!(electricFile.eof())){
        electricFile >> date >> meter;
    }
    electricFile.close();

    /*  Read past weather data  */
    /*  Read past individual schedule   */



    /*  Get detail to predict   */

    /*  Calculate predicted usage   */

    /*  Present prediction  */
}