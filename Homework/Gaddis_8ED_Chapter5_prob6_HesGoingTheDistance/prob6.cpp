
/* 
 * File:   template.cpp
 * Author: Andrew Nicoletti
 * Created on July 12, 2016, 05:30 PM
 * Purpose: He's going for speed
 */
 
#include <iostream>     // she's all alone

using namespace std;    // all alone

// In her time of need

// Because he's racing and pacing and plotting the course,

// He's fighting and biting and riding on his horse,

// He's going the distance.

int main(int argc, char** argv) {
   
    // Declare Variables
    float speed,time;
    // Input Data
    cout<<"How fast are you going, or do you want to go?(mph)"<<endl;
    cin>>speed;
    cout<<"How long is the trip or how long did it take?(hours)"<<endl;
    cin>>time;
    // Process Data
    cout<<"Hour  Distance Traveled"<<endl;
    cout<<"-------------------------"<<endl;
    for(int count=1;count<=time;count++){
    cout<<count<<"      "<<speed*count<<endl;
    }
    
    
    // Output Data
   
    
    return 0;
}

