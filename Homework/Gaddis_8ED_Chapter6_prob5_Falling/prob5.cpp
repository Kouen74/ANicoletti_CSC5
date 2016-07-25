
/* 
 * File:   prob5.cpp
 * Author: Andrew Nicoletti
 * Created on July 25, 2016, 03:30 AM
 * Purpose: Falling Distance
 */
 
#include <iostream>     // System Library

using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 
float fallingDistance(float);
// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    float time,meters;
    char choice;
    // Input Data
    cout<<"This program calculates the distance an object has fallen"<<endl;
    cout<<"Based on the input time.Would you like a demonstration?(y/n)"<<endl;
    cin>>choice;
    switch(choice){
        case 'Y':
        case 'y':for(int count=1;count<=10;count++){
            fallingDistance(static_cast<float>(count));
        }break;
        default:break;
    }
    cout<<"Enter the number of seconds the object has fallen"<<endl;
    
    cin>>time;
    meters=fallingDistance(time);
    // Process Data
    
    // Output Data
   
    
    return 0;
}

float fallingDistance(float seconds){
float dist;
dist=(.5*((9.8)*(seconds)))*(.5*((9.8)*(seconds)));
cout<<"For "<<seconds<<" seconds."<<endl;
cout<<"The distance is "<<dist<<" meters"<<endl;
return dist;
}

