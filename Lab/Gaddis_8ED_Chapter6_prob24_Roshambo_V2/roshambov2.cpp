
/* 
 * File:   roshambo.cpp
 * Author: Andrew Nicoletti
 * Created on July 13, 2016, 012:20 PM
 * Purpose: Rock Paper Scissors v1
 */
 
#include <iostream>     // System Library
#include <cstdlib>      // Random Library
#include <ctime>        // Sea Time
using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 
void gamerps(char,char,int &,int &, int &);
void evaul8 (char,char,int &,int &, int &);

// Exe begins here

int main(int argc, char** argv) {
    // Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    // Declare Variables
    char player,computer;
    int win=0,loss=0,tie=0;
    // Play until user wants to stop
    gamerps(player,computer,win,loss,tie);
    
    cout<<"Total Wins   = "<<win<<endl;
    cout<<"Total Losses = "<<loss<<endl;
    cout<<"Total Ties   = "<<tie<<endl;
    return 0;
}

void gamerps(char player,char computer,int &win,int &loss,int &tie){
    do{
    // Input Data
        cout<<"RPS Game. R, P, or S?"<<endl;
        cin>>player;
        
    // Process Data
    
        do{
            computer=rand()%4+80;//[P,Q,R,S]
        }while(computer=='Q');
        cout<<"Player = "<<player<<" : Computer = "<<computer<<endl;
        switch(player){
            case 'P':{
                if(computer=='P')cout<<"Ties so far = "<<++tie<<endl;
                else if(computer=='S')cout<<"Losses so far = "<<++loss<<endl;
                else cout<<"Wins so far = "<<++win<<endl;
                break;
            }
            case 'R':{
                if(computer=='R')cout<<"Ties so far = "<<++tie<<endl;
                else if(computer=='P')cout<<"Losses so far = "<<++loss<<endl;
                else cout<<"Wins so far = "<<++win<<endl;
                break;
            }
            case 'S':{
                if(computer=='S')cout<<"Ties so far = "<<++tie<<endl;
                else if(computer=='R')cout<<"Losses so far = "<<++loss<<endl;
                else cout<<"Wins so far = "<<++win<<endl;
                break;
            }
            default:cout<<"You are quitting with "<<player<<endl;
        }
        
    // Output Data
    }while(player=='P'||player=='R'||player=='S');
                                            }
