
/* 
 * File:   prob4.cpp
 * Author: Andrew Nicoletti
 * Created on July 12, 2016, 04:50 PM
 * Purpose: Calories Burned
 */
 
#include <iostream>     // System Library

using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 

// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    int min=5;
    // Input Data
    cout<<"Running on a particular treadmill you burn 3.6 calories per minute."<<endl;
    cout<<"If you continue to run on that treadmill, you will burn: "<<endl;
    do {
        cout<<(min*3.6)<<" calories in "<<min<<" minutes"<<endl;
        min+=5;
    }while (min<=30);
    // Process Data
    
    // Output Data
   
    
    return 0;
}

