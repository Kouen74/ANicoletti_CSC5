
/* 
 * File:   prob12.cpp
 * Author: Andrew Nicoletti
 * Created on June 24, 2016, 8:20 PM
 * Purpose: Land Calculation
 */
 
#include <iostream>     // System Library

using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 

// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    int acre,sqft;
    float conv;     //considering the math might right into decimals
    
    // Input Data
    acre=43560;
    sqft=391876;
    conv=sqft/acre;
    // Process Data
   
    // Output Data
    cout<<"Number of acres in a 391,876sqft area is "<<conv<<" acres"<<endl;
    
    return 0;
}

