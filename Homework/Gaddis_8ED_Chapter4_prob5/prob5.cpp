
/* 
 * File:   prob5.cpp
 * Author: Andrew Nicoletti
 * Created on July 04, 2016, 01:50 PM
 * Purpose: Body Mass Index
 */
 
#include <iostream>     // System Library

using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 

// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    float bmi,weight,height;
    // Input Data
    cout<<"Enter your height in inches."<<endl;
    cin>>height;
    cout<<"Enter your weight in lbs."<<endl;
    cin>>weight;
    // Process Data
    bmi=weight*703/(height*height);
    
    // Output Data
    if (bmi>25)
        cout<<"Your BMI is "<<bmi<<". You are overweight."<<endl;
    else if (bmi<18.5)
        cout<<"Your BMI is "<<bmi<<". You are underweight."<<endl;
    else cout<<"Your BMI is "<<bmi<<". You are at optimal weight."<<endl;
    
    return 0;
}

