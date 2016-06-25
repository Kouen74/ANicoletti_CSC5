
/* 
 * File:   prob4.cpp
 * Author: Andrew Nicoletti
 * Created on June 22, 2016, 2:00 AM
 * Purpose: Restaurant Bill
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
    float mealchrg, totaltax, tip;
    
    // Input Data
    mealchrg = 88.67f;          //Quite the expensive meal...
    totaltax = 0.0675f;
    tip = 0.20;
    // Process Data
   
    // Output Data
                                  //The problem asks to display all the
                                  //variables with the end result.
    cout<<"The meal cost is $"<<mealchrg<<endl;
    cout<<"tax is "<<totaltax*100<<"%"<<endl;
    cout<<"You wanted to tip about "<<tip*100<<"% of the meal with tax."<<endl;
    cout<<setprecision(5)<<"The total cost for everything combined is $"
            <<((totaltax+tip)*mealchrg)+mealchrg<<endl;
          
    return 0;
}

