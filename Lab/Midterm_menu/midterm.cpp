
/* 
 * File:   grademenu.cpp
 * Author: Andrew Nicoletti
 * Created on June 28, 2016, 1:30 PM
 * Purpose: How to menu
 */
 
#include <iostream>     // System Library
#include <iomanip>      // Formatting Library
#include <cstdlib>      //Setting random number seed
#include <ctime>        //Time Library
using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants
const int CNVINFT=12;    //12 inches in a foot
// Functions Prototypes 
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob6();
void menu();
// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    char choice;
    
    // Input Data  
    do{
    menu();
    cin>>choice;
    
    // Process Data and display results
    
        switch(choice){
            case '1':prob1();break;
            case '2':prob2();break;
            case '3':prob3();break;
            case '4':prob4();break;
            case '5':prob5();break;
            case '6':prob6();break;
        }
        }while(choice>='1'&&choice<='6');  
        cout<<"Goodbye!"<<endl;
    return 0;
}

//0000000000111111111122222222223333333333444444444455555555556666666666777777777788888888889999999999
//1234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                          Problem 1
//0000000000111111111122222222223333333333444444444455555555556666666666777777777788888888889999999999
//1234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890

//Displays Menu
//      Inputs - Argument list void
//      Internal Input
//  inches -> dimension input

void prob1(){
    cout<<"You are entering Problem 1"<<endl;
    
    //Declaring Variables
    float inches,feet;
    
    //Prompt Input
    cout<<"Conversion from inches to feet"<<endl;
    cout<<"Input the number of inches"<<endl;
    cin>>inches;
    
    //Process the Data
    feet=inches/CNVINFT;
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    cout<<inches<<"(in) = "<<feet<<"(ft)"<<endl;
    
    //Return from Conversion Problem
    
    return;
    
}

//0000000000111111111122222222223333333333444444444455555555556666666666777777777788888888889999999999
//1234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                          Problem 2
//0000000000111111111122222222223333333333444444444455555555556666666666777777777788888888889999999999
//1234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890

//Displays menu
//      Inputs - Random
//      Outputs - The dice

void prob2(){
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    cout<<"You are entering Problem 2"<<endl;
    //Declare variables
    char die1,die2,sum;
    
    //Throwing the dice
    die1=rand()%6+1;
    die2=rand()%6+1;
    sum=die1+die2;
    
    //Output the results
    cout<<"Random Dice Toss is "<<static_cast<int>(sum)<<" = "<<
            static_cast<int>(die1)<<" + "<<static_cast<int>(die2)<<endl;
    
    return;
}

//0000000000111111111122222222223333333333444444444455555555556666666666777777777788888888889999999999
//1234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                          Problem 3
//0000000000111111111122222222223333333333444444444455555555556666666666777777777788888888889999999999
//1234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890

//Displays Menu
//      Inputs - None
//      Outputs - The Menu

void prob3(){
    cout<<"You are entering Problem 3"<<endl;
}

//0000000000111111111122222222223333333333444444444455555555556666666666777777777788888888889999999999
//1234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                          Problem 3
//0000000000111111111122222222223333333333444444444455555555556666666666777777777788888888889999999999
//1234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890

//Displays Menu
//      Inputs - None
//      Outputs - The Menu

void prob4(){
    cout<<"You are entering Problem 4"<<endl;
}

//0000000000111111111122222222223333333333444444444455555555556666666666777777777788888888889999999999
//1234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                          Problem 4
//0000000000111111111122222222223333333333444444444455555555556666666666777777777788888888889999999999
//1234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890

//Displays Menu
//      Inputs - None
//      Outputs - The Menu

void prob5(){
    cout<<"You are entering Problem 5"<<endl;
}


//0000000000111111111122222222223333333333444444444455555555556666666666777777777788888888889999999999
//1234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                          Problem 6
//0000000000111111111122222222223333333333444444444455555555556666666666777777777788888888889999999999
//1234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890

//Displays Menu
//      Inputs - None
//      Outputs - The Menu

void prob6(){
    cout<<"You are entering Problem 6"<<endl;
}

//0000000000111111111122222222223333333333444444444455555555556666666666777777777788888888889999999999
//1234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                          MENU
//0000000000111111111122222222223333333333444444444455555555556666666666777777777788888888889999999999
//1234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890

//Displays Menu
//      Inputs - None
//      Outputs - The Menu

void menu(){
    cout<<"Menu program for the midterm"<<endl;
    cout<<"Simple choose the number for the problem to display"<<endl;
    cout<<"Type 1 for Problem 1 Convert from inches to feet"<<endl;
    cout<<"Type 2 for Problem 2 Throw a pair of dice"<<endl;
    cout<<"Type 3 for Problem 3"<<endl;
    cout<<"Type 4 for Problem 4"<<endl;
    cout<<"Type 5 for Problem 5"<<endl;
    cout<<"Type 6 for Probelm 6"<<endl;
    
}
