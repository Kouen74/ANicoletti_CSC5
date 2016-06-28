
/* 
 * File:   gradeturnaryop.cpp
 * Author: Andrew Nicoletti
 * Created on June 28, 2016, 12:50 PM
 * Purpose: Grade with the turnary op!
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
    grade=(score>=90)?'A':
        (score>=80)?'B':
        (score>=70)?'C':
        (score>=60)?'D':'F';
    
    // Output Data
    cout<<score<<" equates to a "<<grade<<" grade!"<<endl;
    
    return 0;
}

