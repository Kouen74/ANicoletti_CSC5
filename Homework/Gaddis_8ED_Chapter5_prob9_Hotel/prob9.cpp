
/* 
 * File:   prob9.cpp
 * Author: Andrew Nicoletti
 * Created on March 11 2018, 07:10 PM
 * Purpose: Hotel Occupancy
 */
 
#include <iostream>     // System Library
#include <iomanip>      // Format Library

using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 

// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    float floor,occroom,room,roomtot,occrtot=0;        //occroom = occupied room, occupied room total
                                                     //adds the total occupied while keeping occupied room 
                                                     //seperate. Rooms is all the rooms on the floor.
                                                     //roomtot total rooms.
    // Input Data
    cout<<"How many floors does your hotel have?"<<endl;
    cin>>floor;
    while(floor<1){
        cout<<"Must have at least 1 floor..."<<endl;
        cin>>floor;}
    
    // Process Data
    
    for(int level=1;level<=floor;level++){
        if(level==13){
            level++;
            cout<<"...13 is just a number. Get over it."<<endl;
        }
        //Level is the floor counter
        cout<<"How many rooms are on floor "<<level<<"?"<<endl;
        cin>>room;
        while(room<10){
            cout<<"For some reason, I can't imagine a hotel with floors less then 10 rooms. Try again."<<endl;
            cin>>room;
        }
        roomtot=roomtot+room;
        cout<<"How many rooms are occupied in floor "<<level<<"?"<<endl;
        cin>>occroom;
        occrtot=occrtot+occroom;
    }
    // Output Data
    cout<<"Total number of rooms    Total Occupied/Unoccupied   Percentage Occupied"<<endl;
    cout<<"________________________________________________________________________"<<endl;
    cout<<setw(10)<<roomtot<<setw(25)<<occrtot<<" / "<<roomtot-occrtot
            <<setw(28)<<fixed<<setprecision(2)<<occrtot/roomtot<<"%"<<endl;
    
    return 0;
}

