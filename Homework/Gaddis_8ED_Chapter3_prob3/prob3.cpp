
/* 
 * File:   prob3.cpp
 * Author: Andrew Nicoletti
 * Created on July 3, 2016, 07:30 AM
 * Purpose: Test Average
 */
 
#include <iostream>     // System Library
#include <iomanip>      // Format Library
using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 

// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    float grade1,grade2,grade3,grade4,grade5,gradeAv;
    
    // Input Data
    cout<<"Enter 5 test grades."<<endl;
    cin>>grade1>>grade2>>grade3>>grade4>>grade5;
    
    // Process Data
    gradeAv=(grade1+grade2+grade3+grade4+grade5)/5;
    
    // Output Data
    cout<<fixed<<setprecision(1)<<"Your average is "<<gradeAv<<endl;
    
    return 0;
}

