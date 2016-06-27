
/* 
 * File:   prob9.cpp
 * Author: Andrew Nicoletti
 * Created on June 27, 2016, 12:40 PM
 * Purpose: Input display
 */
 
#include <iostream>     // System Library
#include <iomanip>      //Make it look neat
using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 

// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables 
    int x; //number to enter 10 times
    int sumAll=0,sumEven=0,sumOdd=0,sumPos=0,sumNeg;
    
    // Input Data
    cout<<"Input an interger"<<endl;
    cin>>x;
    
    // Process Data
    sumAll+=x;
    if(x%2==0)sumEven+=x;   //Block of code with else statement, dependant if
    else sumOdd+=x;         //Block of code with previous if statement
    sumPos+=x>0?x:0;        //Turnary operator
    if(x<0) sumNeg +=x;     //Independant if statement
   
    
    // Input Data
    cout<<"Input an interger"<<endl;
    cin>>x;
    
    // Process Data
    sumAll+=x;
    if(x%2==0)sumEven+=x;   //Block of code with else statement, dependant if
    else sumOdd+=x;         //Block of code with previous if statement
    sumPos+=x>0?x:0;        //Turnary operator
    if(x<0) sumNeg +=x;     //Independant if statement
    
    // Input Data
    cout<<"Input an interger"<<endl;
    cin>>x;
    
    // Process Data
    sumAll+=x;
    if(x%2==0)sumEven+=x;   //Block of code with else statement, dependant if
    else sumOdd+=x;         //Block of code with previous if statement
    sumPos+=x>0?x:0;        //Turnary operator
    if(x<0) sumNeg +=x;     //Independant if statement
    
    // Input Data
    cout<<"Input an interger"<<endl;
    cin>>x;
    
    // Process Data
    sumAll+=x;
    if(x%2==0)sumEven+=x;   //Block of code with else statement, dependant if
    else sumOdd+=x;         //Block of code with previous if statement
    sumPos+=x>0?x:0;        //Turnary operator
    if(x<0) sumNeg +=x;     //Independant if statement
    
    // Input Data
    cout<<"Input an interger"<<endl;
    cin>>x;
    
    // Process Data
    sumAll+=x;
    if(x%2==0)sumEven+=x;   //Block of code with else statement, dependant if
    else sumOdd+=x;         //Block of code with previous if statement
    sumPos+=x>0?x:0;        //Turnary operator
    if(x<0) sumNeg +=x;     //Independant if statement
    
    // Input Data
    cout<<"Input an interger"<<endl;
    cin>>x;
    
    // Process Data
    sumAll+=x;
    if(x%2==0)sumEven+=x;   //Block of code with else statement, dependant if
    else sumOdd+=x;         //Block of code with previous if statement
    sumPos+=x>0?x:0;        //Turnary operator
    if(x<0) sumNeg +=x;     //Independant if statement
    
    // Input Data
    cout<<"Input an interger"<<endl;
    cin>>x;
    
    // Process Data
    sumAll+=x;
    if(x%2==0)sumEven+=x;   //Block of code with else statement, dependant if
    else sumOdd+=x;         //Block of code with previous if statement
    sumPos+=x>0?x:0;        //Turnary operator
    if(x<0) sumNeg +=x;     //Independant if statement
    
    // Input Data
    cout<<"Input an interger"<<endl;
    cin>>x;
    
    // Process Data
    sumAll+=x;
    if(x%2==0)sumEven+=x;   //Block of code with else statement, dependant if
    else sumOdd+=x;         //Block of code with previous if statement
    sumPos+=x>0?x:0;        //Turnary operator
    if(x<0) sumNeg +=x;     //Independant if statement
    
    // Input Data
    cout<<"Input an interger"<<endl;
    cin>>x;
    
    // Process Data
    sumAll+=x;
    if(x%2==0)sumEven+=x;   //Block of code with else statement, dependant if
    else sumOdd+=x;         //Block of code with previous if statement
    sumPos+=x>0?x:0;        //Turnary operator
    if(x<0) sumNeg +=x;     //Independant if statement
    
    // Input Data
    cout<<"Input an interger"<<endl;
    cin>>x;
    
    // Process Data
    sumAll+=x;
    if(x%2==0)sumEven+=x;   //Block of code with else statement, dependant if
    else sumOdd+=x;         //Block of code with previous if statement
    sumPos+=x>0?x:0;        //Turnary operator
    if(x<0) sumNeg +=x;     //Independant if statement
    
    // Output Data
    cout<<"Sum All      =   "<<setw(5)<<sumAll<<endl;
    cout<<"Sum Even     =   "<<setw(5)<<sumEven<<endl;
    cout<<"Sum Odd      =   "<<setw(5)<<sumOdd<<endl;
    cout<<"Sum Positive =   "<<setw(5)<<sumPos<<endl;
    cout<<"Sum Negative =   "<<setw(5)<<sumNeg<<endl;
    
    return 0;
}

