
/* 
 * File:   prob6.cpp
 * Author: Andrew Nicoletti
 * Created on July 03, 2016, 08:10 AM
 * Purpose: Ingredient Adjuster
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
    float sugar,butter,flour,ckamnt;
    // Input Data
    cout<<"So you want to make cookies eh? \nHow many cookies do you want to bake?"<<endl;
    cin>>ckamnt;
    // Process Data
    sugar=1.5;
    butter=1;
    flour=2.75;
    
    // Output Data
    cout<<"You're going to need:"<<endl;
    cout<<fixed<<setw(4)<<setprecision(2)<<sugar*(ckamnt/48)<<" cups of sugar"<<endl;
    cout<<fixed<<setw(4)<<setprecision(2)<<butter*(ckamnt/48)<<" cups of butter"<<endl;
    cout<<fixed<<setw(4)<<setprecision(2)<<flour*(ckamnt/48)<<" cups of flour"<<endl;
    return 0;
}

