
/* 
 * File:   prob6.cpp
 * Author: Andrew Nicoletti
 * Created on July 25, 2016, 12:40 PM
 * Purpose: Kinetic Energy
 */
 
#include <iostream>     // System Library

using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 
float kineticEnergy(float,float);
// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    float mass,vlcty,ke;
    // Input Data
    cout<<"Input the objects mass(in kilograms)"<<endl;
    cin>>mass;
    cout<<"Input the velocity (in meters per second)"<<endl;
    cin>>vlcty;
    // Process Data
    ke=kineticEnergy(mass,vlcty);
    // Output Data
    cout<<"The Kinetic Energy is "<<ke<<endl;
    
    return 0;
}

float kineticEnergy(float m,float v){
    float kinEn;
    kinEn=((.5*(m*v))*(.5*(m*v)));
    return kinEn;
}
