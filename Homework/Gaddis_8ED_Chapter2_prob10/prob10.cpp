
/* 
 * File:   prob10.cpp
 * Author: Andrew Nicoletti
 * Created on June 24, 2016, 8:00 PM
 * Purpose: Miles per Gallon
 */
 
#include <iostream>     // System Library

using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 

// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    int tank,miles,mpg;
    
    // Input Data
    tank=15;
    miles=375;
    // Process Data
    mpg=miles/tank;
    // Output Data
    cout<<"The mystery car in question has an MPG of "<<mpg<<endl;
    
    return 0;
}

