
/* 
 * File:   prob6.cpp
 * Author: Andrew Nicoletti
 * Created on July 04, 2016, 02:00 PM
 * Purpose: Mass and Weight
 */
 
#include <iostream>     // System Library

using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 

// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    float mass,weight;
    // Input Data
    cout<<"Enter the objects mass."<<endl;
    cin>>mass;
    // Process Data
    weight=mass*9.8;
    // Output Data
    if (weight>1000)
        cout<<"The object has a weight of "<<weight<<" newtons. It is too heavy."<<endl;
    else if (weight<10)
        cout<<"The object has a weight of "<<weight<<" newtons. It is too light."<<endl;
    else cout<<"The object has a weight of "<<weight<<endl;
    
    return 0;
}

