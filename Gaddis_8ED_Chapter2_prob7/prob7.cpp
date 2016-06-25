
/* 
 * File:   prob7.cpp
 * Author: Andrew Nicoletti
 * Created on June 23, 2016, 5:50 PM
 * Purpose: Ocean Levels
 */
 
#include <iostream>     // System Library

using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 

// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    float ocnlvl;               //ocean level in millimeters
    
    // Input Data
    ocnlvl=1.5f;
    // Process Data
   
    // Output Data
    cout<<"If the oceans level rises about "<<ocnlvl<<" millimeters per year"<<endl;
    cout<<"in 5, 7, and 10 years the ocean levels would rise \n"
            <<ocnlvl*5<<", "<<ocnlvl*7<<", and "<<ocnlvl*10<<" millimeters respectively"<<endl;
            
    
    return 0;
}

