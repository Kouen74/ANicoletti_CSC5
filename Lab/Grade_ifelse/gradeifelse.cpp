
/* 
 * File:   gradeifelse.cpp
 * Author: Andrew Nicoletti
 * Created on June 28, 2016, 12:50 PM
 * Purpose: Learning if else statements
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
    if(score>=90)grade='A';
    else if(score>=80)grade='B';
    else if(score>=70)grade='C';
    else if(score>=60)grade='D';
    else              grade='F';
    
    // Output Data
    cout<<score<<" equates to a "<<grade<<" grade!"<<endl;
    
    return 0;
}

