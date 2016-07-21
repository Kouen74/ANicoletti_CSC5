
/* 
 * File:   prob2.cpp
 * Author: Andrew Nicoletti
 * Created on July 21, 2016, 01:10 PM
 * Purpose: Rectangle Area
 */
 
#include <iostream>     // System Library

using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 
float getLength(float);
float getWidth(float);
float getArea(float,float);
void displayData (float,float,float);           //This is an unnecessary amount of functions for no apparent reason
// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    float length,width,area;
    // Input Data
    cout<<"Input the length of the rectangle"<<endl;
    cin>>length;
    cout<<"Input the width of the rectangle"<<endl;
    cin>>width;
    // Process Data
    getLength(length);
    getWidth(width);
    area=getArea(length,width);
    
    // Output Data
    displayData(length,width,area);
    
    return 0;
}

float getLength(float num1){
    cout<<"The length of your rectangle is "<<num1<<endl;
    return num1;
}

float getWidth(float num2){
    cout<<"The width of your rectangle is  "<<num2<<endl;
    return num2;
}

float getArea(float length,float width){
    return length*width;
}
void displayData(float length,float width,float area){
    cout<<"The area of your rectangle is   "<<area<<endl;
}