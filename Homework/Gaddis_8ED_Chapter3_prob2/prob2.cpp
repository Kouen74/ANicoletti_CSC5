
/* 
 * File:   prob2.cpp
 * Author: Andrew Nicoletti
 * Created on June 30, 2016, 12:10 PM
 * Purpose: Stadium Seating
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
    int classA,classB,classC,soldA,soldB,soldC;
    
    classA=15;
    classB=12;
    classC=9;
    // Input Data
    cout<<"Enter the amount of seats sold for class A seats, class B seats and"
            "class C seats. "<<endl;
    cin>>soldA;
    cin>>soldB;
    cin>>soldC;
    
    // Process Data
    
    // Output Data
    cout<<"Class A sold for $"<<soldA*classA<<endl;
    cout<<"Class B sold for $"<<soldB*classB<<endl;
    cout<<"Class C sold for $"<<soldC*classC<<endl;
    
    return 0;
}

