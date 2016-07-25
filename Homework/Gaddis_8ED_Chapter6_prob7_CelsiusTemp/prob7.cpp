
/* 
 * File:   template.cpp
 * Author: Andrew Nicoletti
 * Created on July 03, 2016, 08:00 AM
 * Purpose: Template
 */
 
#include <iostream>     // System Library
#include <iomanip>
using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 
float tempconv (float);
// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    float cel,fahr;
    // Input Data
    cout<<"This program shows the conversion table for Celsius to Fahrenheit"<<endl;
    cout<<"This table will show the conversion from 1F to 120F"<<endl;
    // Process Data
    for(int count=1;count<=120;count++){
        cel=tempconv(count);
        cout<<count<<fixed<<setprecision(2)<<" degrees fahrenheit =   "<<cel<<" degrees celsius"<<endl;
    }
    // Output Data
    
    return 0;
}

float tempconv (float f){
    float celsius;
    celsius=.5555*(f-32);
    return celsius;
}