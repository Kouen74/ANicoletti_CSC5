
/* 
 * File:   prob4.cpp
 * Author: Andrew Nicoletti
 * Created on July 25, 2016, 03:00 AM
 * Purpose: Safest Driving Area
 */
 
#include <iostream>     // System Library

using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 
int getNumAccidents(int);
void findLowest(int,int,int,int,int);
// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    int north,south,east,west,central;
    // Input Data
    cout<<"Please input the number of accidents reported from the north of the city"<<endl;
    cin>>north;
    getNumAccidents(north);
    cout<<"Please input the number of accidents reported from the south of the city"<<endl;
    cin>>south;
    getNumAccidents(south);
    cout<<"Please input the number of accidents reported from the east of the city"<<endl;
    cin>>east;
    getNumAccidents(east);
    cout<<"Please input the number of accidents reported from the west of the city"<<endl;
    cin>>west;
    getNumAccidents(west);
    cout<<"Please input the number of accidents reported from central city"<<endl;
    cin>>central;
    getNumAccidents(central);
    // Process Data
    
    // Output Data
    findLowest(north,south,east,west,central);
    
    return 0;
}

int getNumAccidents(int accdent){
while (accdent<=0){
    cout<<"Please input a number higher than 0"<<endl;
    cin>>accdent;
    return accdent;
}    
}

void findLowest(int north,int south,int east,int west,int central){
    if(north<=south&&north<=east&&north<=west&&north<=central){
        cout<<"North has the lowest amount of accidents with a total of "<<north<<endl;
    }
    if(south<=north&&south<=east&&south<=west&&south<=central){
        cout<<"South has the lowest amount of accidents with a total of "<<south<<endl;
    }
    if(east<=north&&east<=south&&east<=west&&east<=central){
        cout<<"East has the lowest amount of accidents with a total of "<<east<<endl;        
    }
    if(west<=north&&west<=south&&west<=east&&west<=central){
        cout<<"West has the lowest amount of accidents with a total of "<<west<<endl;
    }
    if(central<=north&&central<=south&&central<=east&&central<=west){
        cout<<"Central has the lowest amount of accidents with a total of "<<central<<endl;
    }
}