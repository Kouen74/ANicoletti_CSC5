
/* 
 * File:   prob.cpp
 * Author: Andrew Nicoletti
 * Created on July 12, 2016, 04:20 PM
 * Purpose: Ocean levels
 */
 
#include <iostream>     // System Library
#include <iomanip>      // Formatting Library
#include <string>       // String Library
#include <cstdlib>      // Static Shock
using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 

// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    float orise;
    string s="year",p="years";
    // Input Data
    cout<<"Input the current ocean level in millimeters."<<endl;
    cin>>orise;
    cout<<"If the ocean levels were to rise 1.5millimeters per year"<<endl;
    cout<<"These are the ocean levels in the next 25 years:"<<endl;
    
    // Process Data
    
    for(float count=1.0f;count<=25;count++){
        while (count<2){
        cout<<"Ocean level in "<<count<<" "<<s<<" "<<setw(2)<<orise+(count*1.5f)<<endl;
        count++;
        } 
            cout<<"Ocean level in "<<count<<" "<<p<<" "<<setw(2)<<orise+(count*1.5f)<<endl;
    }
    // Output Data
   
    
    return 0;
}

