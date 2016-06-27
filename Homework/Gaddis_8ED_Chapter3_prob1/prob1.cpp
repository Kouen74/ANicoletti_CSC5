
/* 
 * File:   prob1.cpp
 * Author: Andrew Nicoletti
 * Created on June 27, 2016, 12:30 PM
 * Purpose: Miles per Gallon
 */
 
#include <iostream>     // System Library
#include <iomanip>
using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 

// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
   
    float tank,mdrive;
    
    // Input Data
    cout<<"Input the number of gallons the tank can hold for a car."<<endl;
    cin>>tank;
    cout<<"Input the number of miles the car can drive on the full tank."<<endl;
    cin>>mdrive;
    cout<<"The miles per gallon of that car is "<<fixed<<setw(2)<<setprecision(2)<<mdrive/tank;
    // Process Data
   
    // Output Data
   
    
    return 0;
}

