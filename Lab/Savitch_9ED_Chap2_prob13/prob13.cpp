
/* 
 * File:   prob13.cpp
 * Author: Andrew Nicoletti
 * Created on June 28, 2016, 12:30 PM
 * Purpose: BMR
 */
 
#include <iostream>     // System Library

using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 

// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    char mf;
    float lbs,inches,yrs;
    float bmr,chocBar=230.0f;
    int nBars;
    
    // Input Data
    cout<<"Candy bar calculation to maintain weight"<<endl;
    cout<<"Eat less than this to lose weight:"<<endl;
    cout<<"Input male of female with m or f"<<endl;
    cin>>mf;
    cout<<"Input weight(lbs), height(inches), age(yrs)"<<endl;
    cin>>lbs>>inches>>yrs;
    
    // Process Data
    if(mf=='m'||mf=='M'){
        bmr=66+6.3*lbs+12.9*inches+6.8*yrs;
    }else{
        bmr=655+4.3*lbs+4.7*inches+4.7*yrs;
        
    }
    nBars=bmr/chocBar+1;
    // Output Data
    cout<<"Eat less than "<<nBars<<" chocolate bars to lose weight"<<endl;
    
    return 0;
}

