
/* 
 * File:   template homework menu.cpp
 * Author: Andrew Nicoletti
 * Created on July 012, 2016, 08:50 PM
 * Purpose: Template
 */
 
#include <iostream>     // System Library
#include <iomanip>      // Format Library
#include <cmath>        // Math
#include <cstdlib>      // Stuff
#include <string>       // Strings      

using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 

// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    int choice;
    // Input Data
    cout<<"                            Nicoletti, Andrew - Assignment 4"<<endl;
    cout<<"_______________________________________________________________________________________________________"<<endl;
    cout<<"Please choose any of the 10 problems from Gaddis, 8th Edition, Chapter 5"<<endl;
    cout<<"Press a number between 1 - 10 for the corresponding program, then hit enter."<<endl;
    cout<<"Note:Problem 8 is skipped, so choice 8 is problem 9, choice 9 is problem 10 and choice 10 is problem 11"<<endl;
    cin>>choice;
    
    while(choice<1||choice>10);
    
    do{    
    switch(choice){
        case 1:{int sum,num,countprev,total;
    
    // Input Data
    cout<<"This program adds the sum of all the numbers from 1 to whatever number you input."<<endl;    
    cout<<"Enter a positive interger."<<endl;
    cin>>sum;
    
    // Process Data
    while(sum<=0){
        cout<<"Please enter a positive number other than 0."<<endl;
        cin>>sum;
    }
    
    for(int count=1;count<=sum;count++){
        countprev=count-1;
        total=(count*(count+1))/2;
        cout<<count<<" + "<<total-count<<" = "<<total<<endl;
        
                                    }           
    
    //  Output Data
    cout<<"The sum of the numbers from 0 - "<<sum<<" is "<<(sum*(sum+1))/2<<endl;};
    break;
        case 2:{cout<<"This program displays the ASCII codes from 1 - 127."<<endl;
    
    for (int count=1;count<=127;count++){
        if(count%16==0){
            cout<<endl;}
      cout<<static_cast<char>(count);
                                    }
            };
    break;
        case 3:{float orise;
    string s="year",p="years";
    // Input Data
    cout<<"Input the current ocean level in millimeters."<<endl;
    cin>>orise;
    cout<<"If the ocean levels were to rise 1.5millimeters per year"<<endl;
    cout<<"These are the ocean levels in the next 25 years:"<<endl;
    
    // Process Data
    
    for(float count=1.0f;count<=25;count++){
        while (count<2){
        cout<<"Ocean level in "<<count<<" "<<s<<" "<<setw(2)<<orise+(count*1.5f)<<endl;
        count++;
                    } 
            cout<<"Ocean level in "<<count<<" "<<p<<" "<<setw(2)<<orise+(count*1.5f)<<endl;
                                        }        
        };
    break;
        case 4:{int min=5;
    // Input Data
    cout<<"Running on a particular treadmill you burn 3.6 calories per minute."<<endl;
    cout<<"If you continue to run on that treadmill, you will burn: "<<endl;
    do {
        cout<<(min*3.6)<<" calories in "<<min<<" minutes"<<endl;
        min+=5;
    }while (min<=30);
        };break;
        case 5:{float memfee;
    memfee=2500.00f;
    string s,p;         // singular and plural of the word year
    s="year";
    p="years";
    // Input Data
    
    // Process Data
    cout<<"Membership fee for a country club is at $2,500 per year (who has that kind of money?)"<<endl;
    cout<<"The club is increase it's fee by 4% each year for the next six years."<<endl;
    for(int count=1;count<=6;count++){
        memfee=memfee*1.04f;
        if (count<2){
        cout<<"In "<<count<<" "<<s<<", "<<"the annual membership will increase to $"<<
                fixed<<setprecision(2)<<memfee<<endl;
        
        }else
        cout<<"In "<<count<<" "<<p<<", "<<"the annual membership will increase to $"<<memfee<<endl;
    }};break;
        case 6:{float speed,time;
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
    }};break;
        case 7:{float pennies=1,days;  
    // Input Data
    cout<<"How many days have you worked for pennies that multiply exponentially?"<<endl;
    cin>>days;
     cout<<"Days         US Dollars"<<endl;
     cout<<"-----------------------"<<endl;
    // Process Data
    while(days<=0){
        cout<<"Please enter a positive number."<<endl;
        cin>>days;
    }    
     for(int count=1;count<=days;count++){
        
        cout<<count<<"               $"<<fixed<<setprecision(2)<<(pennies)/100<<endl;
        pennies*=2;
    }};break;
        case 8:{float floor,occroom,room,roomtot,occrtot=0;        //occroom = occupied room, occupied room total
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
            <<setw(28)<<fixed<<setprecision(2)<<occrtot/roomtot<<"%"<<endl;};break;
        case 9:{int year;
    float rain,raintot;                              //year, rain, rain total
    // Input Data
    cout<<"This program calculates the average number of rainfall per month in years."<<endl;
    cout<<"Enter the number of years of rainfall to be averaged."<<endl;
    cin>>year;
    while(year<1){
        cout<<"Need at least 1 year mate."<<endl;
        cin>>year;
    }
    
    for(int ycount=1;ycount<=(year*12);ycount++){
        cout<<"How many inches of rainfall in month "<<ycount<<"?"<<endl;
        cin>>rain;
        while(rain<0){
            cout<<"How is inches of rainfall a negative number? Water Condensation?"<<endl;
            cout<<"Try again mate."<<endl;
            cin>>rain;
        }
        raintot=raintot+rain;
    }
    // Process Data
    
    // Output Data
    cout<<"Total Months----------Total Rainfall-----Average Rainfall"<<endl;
    cout<<year*12<<setw(26)<<raintot<<setw(23)<<raintot/(year*12)<<endl;};
    break;
        case 10:{int org,days;  
    float orgavg,popinc;       //Organisms, Population increase in percentage
    // Input Data
    cout<<"This program predicts a population increase assuming the factors are consistant."<<endl;
    cout<<"Enter the number of organisms of this population"<<endl;
    cin>>org;
    while(org<2){
        cout<<"Need a population of at least 2 to multiply"<<endl;
        cin>>org;
    }
    cout<<"What is the daily average population increase? (in percent)"<<endl;
    cin>>popinc;
    while(popinc<0){
        cout<<"Must enter a positive number"<<endl;
        cin>>popinc;
    }
    cout<<"How many number of days are they multiplying?"<<endl;
    cin>>days;
    while(days<1){
        cout<<"Needs to be at least 1 day"<<endl;
        cin>>days;
    }
    
    
    // Process Data
    orgavg=org;
    cout<<"Day____Population Size"<<endl;
    for (int count=1;count<=days;count++){
        cout<<count<<fixed<<setw(12)<<setprecision(2)<<orgavg<<endl;
        orgavg=orgavg+(orgavg*(popinc/100));
        
    }};break;
           
        
   
    }
    cout<<"Enter another number to see another problem, otherwise just close this program."<<endl;
    cin>>choice;
    }
    while(choice>=1||choice<=10);
    
    return 0;
}

