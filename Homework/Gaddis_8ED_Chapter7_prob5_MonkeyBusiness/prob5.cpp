
/* 
 * File:   prob5.cpp
 * Author: Andrew Nicoletti
 * Created on July 27, 2016, 05:30 AM
 * Purpose: Monkey Business
 */
 
#include <iostream>     // System Library

using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 

// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    const int MONKEY=3;
    const int DAYS=5;
    int food[MONKEY][DAYS],foodTot,foodLow,foodHigh;
    // Input Data
    cout<<"Input food data for monkeys 1-3, for days 1-5"<<endl;
    for(int count=0;count<MONKEY;count++){
        for(int loop=0;loop<DAYS;loop++){
            cout<<"Input for monkey"<<count+1<<" the food for day "<<loop+1<<endl;
            cin>>food[count][loop];
        }
    }
    // Process Data
    foodTot=0;
    for(int row=0;row<MONKEY;row++){
        for(int col=0;col<DAYS;col++){
            foodTot+=food[row][col];
        }
    }
    
    foodLow=food[0][0];
    for(int lowRow=0;lowRow<MONKEY;lowRow++){
        for(int lowCol=0;lowCol<DAYS;lowCol++){
            if(food[lowRow][lowCol]<foodLow){
                foodLow=food[lowRow][lowCol];
            }
        }
    }
    
    foodHigh=food[0][0];
    for(int highRow=0;highRow<MONKEY;highRow++){
        for(int highCol=0;highCol<DAYS;highCol++){
            if(food[highRow][highCol]>foodHigh){
                foodHigh=food[highRow][highCol];
            }
        }
    }
    // Output Data
    cout<<"The average amount of food eaten per day the monkeys is "<<foodTot/3.0f<<endl;
    cout<<"The least amount of food eaten in the week by any one monkey is "<<foodLow<<endl;
    cout<<"The greatest amount of food eaten by one monkey in the week is "<<foodHigh<<endl;
    
    return 0;
}

