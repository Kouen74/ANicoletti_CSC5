
/* 
 * File:   gradeswitch.cpp
 * Author: Andrew Nicoletti
 * Created on June 28, 2016, 1:10 PM
 * Purpose: Grade with switches
 */
 
#include <iostream>     // System Library

using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 

// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    unsigned int score; //Input [0,100]
    char grade; //Output [A,B,C,D,F]
    
    // Input Data
    cout<<"Input the score [0,100] output will be the grade"<<endl;
    cin>>score;
    
    // Process Data
    switch(score/10){
        case    11:
        case    10:
        case    9:grade='A';break;
        case    8:grade='B';break;
        case    7:grade='C';break;
        case    6:grade='D';break;
        default:grade='F';
    }
    // Output Data
    cout<<score<<" equates to a "<<grade<<" grade!"<<endl;
    
    return 0;
}

