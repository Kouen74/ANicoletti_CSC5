
/* 
 * File:   gradeindif.cpp
 * Author: Andrew Nicoletti
 * Created on June 28, 2016, 1:20 PM
 * Purpose: Grade with independant if's
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
    grade='F';  //Default Value
    if(score<=120&&score>=90)grade='A';
    if(score<90&&score>=80)  grade='B';
    if(score<80&&score>=70)  grade='C';
    if(score<70&&score>=60)  grade='D';
    
    // Output Data
    cout<<score<<" equates to a "<<grade<<" grade!"<<endl;
    
    return 0;
}

