#include <iostream>
#include "log.hpp"

void InitLog(){
    Log("Initializing Log");
}

void Log(char const* message){
    std::cout << message << std::endl;
}