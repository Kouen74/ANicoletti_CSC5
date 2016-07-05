
/* 
 * File:   prob4.cpp
 * Author: Andrew Nicoletti
 * Created on July 04, 2016, 01:50 PM
 * Purpose: Area of Rectangles
 */
 
#include <iostream>     // System Library

using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 

// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    float length1,width1,length2,width2;
    
    // Input Data
    cout<<"Enter the length of the first rectangle."<<endl;
    cin>>length1;
    cout<<"Enter the width of the first rectangle."<<endl;
    cin>>width1;
    cout<<"Enter the length of the second rectangle."<<endl;
    cin>>length2;
    cout<<"Enter the width of the second rectangle."<<endl;
    cin>>width2;
    // Process Data
    if ((length1*width1)>(length2*width2))
        cout<<"First rectangle has more area than the second rectangle."<<endl;
    else if ((length1*width1)<(length2*width2))
        cout<<"Second rectangle has more area than the first rectangle."<<endl;
    else cout<<"They have the same area."<<endl;
    // Output Data
   
    
    return 0;
}

