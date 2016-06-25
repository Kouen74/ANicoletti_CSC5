
/* 
 * File:   prob2.cpp
 * Author: Andrew Nicoletti
 * Created on June 22, 2016, 1:40 AM
 * Purpose: Sales Prediction
 */
 
#include <iostream>     // System Library
#include <iomanip>      // To make things a little prettier
using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 

// Exe begins here

int main(int argc, char** argv) {
    
    // Declare Variables
    float estcst;   // east coast division
    int comppred;    // company prediction
    
    // Input Data
    
    // Process Data
   estcst = 0.58f; // east cost division makes up 58% of sales
   comppred = 8.06f; // company predicts the money it will make
   
    // Output Data
   
   cout<<setprecision(4)<<"The East Coast division will make $"<<comppred/estcst<<" million"<<endl;
   cout<<"Out of the predicted $8.6 million."<<endl;
    
    return 0;
}

