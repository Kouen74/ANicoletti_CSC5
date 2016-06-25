
/* 
 * File:   prob11.cpp
 * Author: Andrew Nicoletti
 * Created on June 24, 2016, 8:10 PM
 * Purpose: Distance per Tank of Gas (ok so it's inverse of the previous problem)
 */
 
#include <iostream>     // System Library

using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 

// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    float mpgt,mpgh;
    int tank;
    
    // Input Data
    mpgt=23.5f;
    mpgh=28.9f;
    tank=20;
    // Process Data
   
    // Output Data
    cout<<"Mystery car #2 miles per tank in town is "<<mpgt*tank<<endl;
    cout<<"miles per tank on the highway for the mystery car is "<<mpgh*tank<<endl;
    
    return 0;
}

