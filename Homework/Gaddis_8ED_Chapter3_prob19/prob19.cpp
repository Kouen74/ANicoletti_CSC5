
/* 
 * File:   prob19.cpp
 * Author: Andrew Nicoletti
 * Created on June 27, 2016, 12:30 PM
 * Purpose: Equal Monthly Loan Payments
 */
 
#include <iostream>     // System Library
#include <iomanip>      // Formate Library
#include <cmath>         // Math Library
using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 

// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    float loanAmt,intRate,nPymnts;    // Inputs to the problem
    float mPymnts,totPaid,intpaid;     // Outputs to the problem
    
    
    // Input Data
    cout<<"Loan Calculator for Equal Monthly Payments"<<endl;
    cout<<"Input all 3 at once"<<endl;
    cout<<"Loan amt $'s, Interest Rate %, Number of Monthly Payments"<<endl;
    cin>>loanAmt>>intRate>>nPymnts;
    
    // Process Data
    float temp=exp(nPymnts*log(1+intRate)); // Intermediate Value
    mPymnts=intRate*temp*loanAmt/(temp-1);  // Equal Payment Calculation
    totPaid=nPymnts*mPymnts;                       // Financed
    intpaid=totPaid-loanAmt;
    
    // Output Data
    cout<<fixed<<setw(10)<<setprecision(2)<<"Monthly Payment  = $"<<mPymnts<<endl;
    cout<<"Total paid       = $"<<totPaid<<endl;
    cout<<"Interest paid    = $"<<intpaid<<endl;
    
    return 0;
}

