
/* 
 * File:   menu.cpp
 * Author: Andrew Nicoletti
 * Created on July 05, 2016, 08:00 PM
 * Purpose: Homework menu
 */
 
#include <iostream>     // System Library
#include <iomanip>      
#include <string>
using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 

// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    int choice;
    
    // Input Data
    cout<<"This program selects the homework done by Andrew Nicoletti."<<endl;
    cout<<"Please select a problem you wish to see."<<endl;
    cout<<"Gaddis chapter 3 problems 1-10 are listed as 1-10 respectively."<<endl;
    cout<<"Gaddis chapter 4 problems 1-7 are listed as 11-17 respectively."<<endl;
    cout<<"Savitch chapter 3 problems 3, 4 and 9 are listed as 18, 19, and 20 respectively."<<endl;
    // Process Data
    cin>>choice;  
    // Output Data
   
    switch (choice)
    {
        case 1:
            cout<<"Gaddis chapter 3 problem 1:"<<endl;
            float tank,mdrive;
    
    // Input Data
    cout<<"Input the number of gallons the tank can hold for a car."<<endl;
    cin>>tank;
    cout<<"Input the number of miles the car can drive on the full tank."<<endl;
    cin>>mdrive;
    cout<<"The miles per gallon of that car is "<<fixed<<setw(2)<<setprecision(2)<<mdrive/tank;
       break;
            
        case 2:
            cout<<"Gaddis chapter 3 problem 2:"<<endl;
            int classA,classB,classC,soldA,soldB,soldC;
    
    classA=15;
    classB=12;
    classC=9;
    // Input Data
    cout<<"Enter the amount of seats sold for class A seats, class B seats and"
            "class C seats. "<<endl;
    cin>>soldA;
    cin>>soldB;
    cin>>soldC;
    
    // Process Data
    
    // Output Data
    cout<<"Class A sold for $"<<soldA*classA<<endl;
    cout<<"Class B sold for $"<<soldB*classB<<endl;
    cout<<"Class C sold for $"<<soldC*classC<<endl;
         break;
            
        case 3:
            cout<<"Gaddis chapter 3 problem 3:"<<endl;
            float grade1,grade2,grade3,grade4,grade5,gradeAv;
    
    // Input Data
    cout<<"Enter 5 test grades."<<endl;
    cin>>grade1>>grade2>>grade3>>grade4>>grade5;
    
    // Process Data
    gradeAv=(grade1+grade2+grade3+grade4+grade5)/5;
    
    // Output Data
    cout<<fixed<<setprecision(1)<<"Your average is "<<gradeAv<<endl;
         break;
            
        case 4:{
            cout<<"Gaddis chapter 3 problem 4:"<<endl;
#include <string>
            string month1,month2,month3;
    float rain1,rain2,rain3,totalAv;
    // Input Data
    cout<<"Name of the first month:"<<endl;
    cin>>month1;
    cin.ignore();               //skips new line character
    cout<<"How much rain in inches for that month?"<<endl;
    cin>>rain1;
    cout<<"Name of the second month:"<<endl;
    cin>>month2;
    cin.ignore();
    cout<<"How much rain in inches for that month?"<<endl;
    cin>>rain2;
    cout<<"Name of the third month:"<<endl;
    cin>>month3;
    cin.ignore();
    cout<<"How much rain in inches for that month?"<<endl;
    cin>>rain3;
    
    // Process Data
   totalAv=(rain1+rain2+rain3)/3;
    // Output Data
   cout<<"The average amount of rain for "<<month1<<','<<month2<<" and "<<month3<<"is"<<endl;
   cout<<fixed<<setprecision(2)<<totalAv<<" inches of rain"<<endl;
    
        }break;
               
        case 5:
            cout<<"Gaddis chapter 3 problem 5:"<<endl;
            float males,females,maleprc, femaleprc;    //percentages often spill into the fractional realm, hence the float.
    // Input Data
    cout<<"Enter the number of males in the class:"<<endl;
    cin>>males;
    cout<<"Enter the number of females in the class:"<<endl;
    cin>>females;
    // Process Data
    maleprc=males/(males+females);
    femaleprc=females/(males+females);
    // Output Data
    cout<<"The percentage of males in the class is"<<endl;
    cout<<fixed<<setprecision(2)<<setw(4)<<maleprc*100<<"%"<<endl;
    cout<<"The percentage of females in the class is"<<endl;
    cout<<fixed<<setprecision(2)<<setw(4)<<femaleprc*100<<"%"<<endl;
        break;
            
        case 6:
            cout<<"Gaddis chapter 3 problem 6:"<<endl;
            float sugar,butter,flour,ckamnt;
    // Input Data
    cout<<"So you want to make cookies eh? \nHow many cookies do you want to bake?"<<endl;
    cin>>ckamnt;
    // Process Data
    sugar=1.5;
    butter=1;
    flour=2.75;
    
    // Output Data
    cout<<"You're going to need:"<<endl;
    cout<<fixed<<setw(4)<<setprecision(2)<<sugar*(ckamnt/48)<<" cups of sugar"<<endl;
    cout<<fixed<<setw(4)<<setprecision(2)<<butter*(ckamnt/48)<<" cups of butter"<<endl;
    cout<<fixed<<setw(4)<<setprecision(2)<<flour*(ckamnt/48)<<" cups of flour"<<endl;
         break;
            
        case 7:{
            cout<<"Gaddis chapter 3 problem 7:"<<endl;
#include <string>
            string nMovie;
    int aTick,cTick;
    float aPrice,cPrice,gross,net;
    // Input Data
    cout<<"What's the name of the movie?"<<endl;
    getline(cin,nMovie);
    cout<<"How many adult tickets were sold?"<<endl;
    cin>>aTick;
    cout<<"How many child tickets were sold?"<<endl;
    cin>>cTick;
    
    // Process Data
    gross=(aTick*10.00)+(cTick*6.00);
    // Output Data
    cout<<setw(35)<<' '<<nMovie<<endl;
    cout<<"Adult tickets sold:        "<<setw(15)<<aTick<<endl;
    cout<<"Child tickets sold:        "<<setw(15)<<cTick<<endl;
    cout<<"Gross box office profit:   "<<setw(15)<<fixed<<setprecision(2)<<gross<<endl;
    cout<<"Net box office profit:     "<<setw(15)<<fixed<<setprecision(2)<<gross*.2<<endl;
    cout<<"Amount paid to Distributor:"<<setw(15)<<fixed<<setprecision(2)<<gross-(gross*.2)<<endl;
        }break;
            
        case 8:
            cout<<"Gaddis chapter 3 problem 8:"<<endl;
            float widget,pallet;
    
    // Input Data
    cout<<"How much does the pallet weigh by itself in lbs.?"<<endl;
    cin>>pallet;
    cout<<"How much does it all weigh together?"<<endl;
    cin>>widget;
    // Process Data
   
    // Output Data
    cout<<"You have about "<<(widget-pallet)/12.5<<" widgets on that pallet."<<endl;
        break;
            
        case 9:
            cout<<"Gaddis chapter 3 problem 9:"<<endl;
            float cookie;                   //float rather than int in case someone wants to eat 'half'
    // Input Data
    cout<<"How many cookies did you eat?"<<endl;
    cin>>cookie;
    // Process Data
   
    // Output Data
    cout<<"You ate "<<cookie*100<<" calories worth of cookies"<<endl;
        break;
            
        case 10:
            cout<<"Gaddis chapter 3 problem 10:"<<endl;
            float thing; 
    // Input Data
    cout<<"Yo dawg, how much would that building cost if it needs to be rebuilt?"<<endl;
    cin>>thing;
    // Process Data
   
    // Output Data
    cout<<"Yo dawg, I think you should ensure at least $"<<fixed<<setprecision(2)<<
    thing*.8<<" of that building homie."<<endl;
        break;
            
        case 11:
            cout<<"Gaddis chapter 4 problem 1:"<<endl;
            float num1,num2;
    
    // Input Data
    cout<<"Enter two numbers. This program will compare and see which is of greater value"<<endl;
    cin>>num1;
    cin>>num2;
    // Process Data
    if (num1>num2)
    
        cout<<num1<<" is greater than "<<num2;
        else if (num2>num1)
        
        cout<<num2<<" is greater than "<<num1;
        else cout<<"They are of the same value."<<endl;
            break;
            
        case 12:
            cout<<"Gaddis chapter 4 problem 2:"<<endl;
            unsigned short x;                    //number to convert
   unsigned char n1000s,n100s,n10s,n1s; //stripping of digits 
    
   // Input Data
   cout<<"Input a number from 1 to 3000 to convert"<<endl;
   cout<<"to a Roman Numeral"<<endl;
   cin>>x;
   
    // Process Data
   if(x<1||x>3000)return 1;
  
    // Output Data
   //Thousand position
   n1000s=(x-x%1000)/1000;
   switch(n1000s){
       case 3:cout<<"M";
       case 2:cout<<"M";
       case 1:cout<<"M";
   }
   x-=n1000s*1000; 
   
   //Hundred position
   n100s=(x-x%100)/100;
   switch(n100s){
       case 9:cout<<"CM";break;
       case 8:cout<<"DCCC";break;
       case 7:cout<<"DCC";break;
       case 6:cout<<"DC";break;
       case 5:cout<<"D";break;
       case 4:cout<<"CD";break;
       case 3:cout<<"C";
       case 2:cout<<"C";
       case 1:cout<<"C";
   }
   x-=n100s*100; 
   
   //Tens position
   n10s=(x-x%10)/10;
   switch(n10s){
       case 9:cout<<"IC";break;
       case 8:cout<<"LXXX";break;
       case 7:cout<<"LXX";break;
       case 6:cout<<"LX";break;
       case 5:cout<<"L";break;
       case 4:cout<<"XL";break;
       case 3:cout<<"X";
       case 2:cout<<"X";
       case 1:cout<<"X";
   }
   x-=n10s*10; 
   
   //Ones position
   n1s=(x-x%1)/1;
   switch(n1s){
       case 9:cout<<"IX";break;
       case 8:cout<<"VIII";break;
       case 7:cout<<"VII";break;
       case 6:cout<<"VI";break;
       case 5:cout<<"V";break;
       case 4:cout<<"IV";break;
       case 3:cout<<"I";
       case 2:cout<<"I";
       case 1:cout<<"I";
   }
            break;
            
        case 13:
            cout<<"Gaddis chapter 4 problem 3:"<<endl;
            int day,month,year;
    
    // Input Data
    cout<<"Enter the month."<<endl;
    cin>>month;
    cout<<"Enter the day."<<endl;
    cin>>day;
    cout<<"Enter the year."<<endl;
    cin>>year;
    // Process Data
    if (day*month==year)
        cout<<"The date is magic!"<<endl;
    else cout<<"The date is not magic..."<<endl;
    // Output Data
            break;
            
        case 14:
            cout<<"Gaddis chapter 4 problem 4:"<<endl;
            float length1,width1,length2,width2;
    
    // Input Data
    cout<<"Enter the length of the first rectangle."<<endl;
    cin>>length1;
    cout<<"Enter the width of the first rectangle."<<endl;
    cin>>width1;
    cout<<"Enter the length of the second rectangle."<<endl;
    cin>>length2;
    cout<<"Enter the width of the second rectangle."<<endl;
    cin>>width2;
    // Process Data
    if ((length1*width1)>(length2*width2))
        cout<<"First rectangle has more area than the second rectangle."<<endl;
    else if ((length1*width1)<(length2*width2))
        cout<<"Second rectangle has more area than the first rectangle."<<endl;
    else cout<<"They have the same area."<<endl;
    // Output Data
            break;
            
        case 15:
            cout<<"Gaddis chapter 4 problem 5:"<<endl;
            float bmi,weight,height;
    // Input Data
    cout<<"Enter your height in inches."<<endl;
    cin>>height;
    cout<<"Enter your weight in lbs."<<endl;
    cin>>weight;
    // Process Data
    bmi=weight*703/(height*height);
    
    // Output Data
    if (bmi>25)
        cout<<"Your BMI is "<<bmi<<". You are overweight."<<endl;
    else if (bmi<18.5)
        cout<<"Your BMI is "<<bmi<<". You are underweight."<<endl;
    else cout<<"Your BMI is "<<bmi<<". You are at optimal weight."<<endl;
            break;
            
        case 16:{
            cout<<"Gaddis chapter 4 problem 6:"<<endl;
            float mass,weight;
    // Input Data
    cout<<"Enter the objects mass."<<endl;
    cin>>mass;
    // Process Data
    weight=mass*9.8;
    // Output Data
    if (weight>1000)
        cout<<"The object has a weight of "<<weight<<" newtons. It is too heavy."<<endl;
    else if (weight<10)
        cout<<"The object has a weight of "<<weight<<" newtons. It is too light."<<endl;
    else cout<<"The object has a weight of "<<weight<<endl;
        } break;
            
        case 17:{
            cout<<"Gaddis chapter 4 problem 7:"<<endl;
            int day,hour,minute,second;
    
    // Input Data
    cout<<"This program converts seconds into minutes, hours and or days."<<endl;
    cout<<"Input the number of seconds you wish to convert."<<endl;
    cin>>second;
    // Process Data
    day=second/86400;
    hour=second/3600;
    minute=second/60;
    // Output Data
    if ((second>59)&&(second<3600))
        cout<<minute<<"minutes "<<second%60<<" seconds."<<endl;
    if ((second>3599)&&(second<86400))
        cout<<hour<<" hours "<<(second%3600)/60<<" minutes "<<(second%3600)%60<<" seconds."<<endl;
    if (second>86399)
        cout<<day<<" days "<<(second%86400)/3600<<" hours "<<(second%86400%3600)/60<<" minutes "<<second%86400%3600%60<<" seconds."<<endl;
    cout<<second<<" seconds"<<endl;
        } break;
            
        case 18:{
            cout<<"Savitch chapter 3 problem 3:"<<endl;
            unsigned short x;                    //number to convert
   unsigned char n1000s,n100s,n10s,n1s; //stripping of digits 
    
   // Input Data
   cout<<"Input a number from 1 to 3000 to convert"<<endl;
   cout<<"to a Roman Numeral"<<endl;
   cin>>x;
   
    // Process Data
   if(x<1||x>3000)return 1;
  
    // Output Data
   //Thousand position
   n1000s=(x-x%1000)/1000;
   switch(n1000s){
       case 3:cout<<"M";
       case 2:cout<<"M";
       case 1:cout<<"M";
   }
   x-=n1000s*1000; 
   
   //Hundred position
   n100s=(x-x%100)/100;
   switch(n100s){
       case 9:cout<<"CM";break;
       case 8:cout<<"DCCC";break;
       case 7:cout<<"DCC";break;
       case 6:cout<<"DC";break;
       case 5:cout<<"D";break;
       case 4:cout<<"CD";break;
       case 3:cout<<"C";
       case 2:cout<<"C";
       case 1:cout<<"C";
   }
   x-=n100s*100; 
   
   //Tens position
   n10s=(x-x%10)/10;
   switch(n10s){
       case 9:cout<<"IC";break;
       case 8:cout<<"LXXX";break;
       case 7:cout<<"LXX";break;
       case 6:cout<<"LX";break;
       case 5:cout<<"L";break;
       case 4:cout<<"XL";break;
       case 3:cout<<"X";
       case 2:cout<<"X";
       case 1:cout<<"X";
   }
   x-=n10s*10; 
   
   //Ones position
   n1s=(x-x%1)/1;
   switch(n1s){
       case 9:cout<<"IX";break;
       case 8:cout<<"VIII";break;
       case 7:cout<<"VII";break;
       case 6:cout<<"VI";break;
       case 5:cout<<"V";break;
       case 4:cout<<"IV";break;
       case 3:cout<<"I";
       case 2:cout<<"I";
       case 1:cout<<"I";
   }
            break;
            
        case 19:
            cout<<"Savitch chapter 3 problem 4:"<<endl;
            char card;
    int value=0, excess=0;
    
    // Input Data
    cout<<"Input a card A,T,J,Q,K,2-9"<<endl;
    cin>>card;
    // Process Data
    switch(card){
        case'K':
        case'Q':
        case'J':
        case'T':value+=10;break;
        case'9':
        case'8':
        case'7':
        case'6':
        case'5':
        case'4':
        case'3':
        case'2':value+=(card-48);break;
        case'A':value+=11;excess=10;
            
    }
    
    // Output Data
    cout<<"The value of the hand at this point = "<<value<<endl;
    
     // Input Data Card 2
    cout<<"Input a card A,T,J,Q,K,2-9"<<endl;
    cin>>card;
    // Process Data
    switch(card){
        case'K':
        case'Q':
        case'J':
        case'T':value+=10;break;
        case'9':
        case'8':
        case'7':
        case'6':
        case'5':
        case'4':
        case'3':
        case'2':value+=(card-48);break;
        case'A':value+=11;excess=10;
            
    }
    if(value>21)value-=excess;
    
    // Output Data Card 2
    cout<<"The value of the hand at this point = "<<value<<endl;
    
    // Input Data Card 2
    cout<<"Input a card A,T,J,Q,K,2-9"<<endl;
    cin>>card;
    // Process Data
    switch(card){
        case'K':
        case'Q':
        case'J':
        case'T':value+=10;break;
        case'9':
        case'8':
        case'7':
        case'6':
        case'5':
        case'4':
        case'3':
        case'2':value+=(card-48);break;
        case'A':value+=11;excess=10;
            
    }
    if(value>21)value-=excess;
    
    // Output Data Card 2
    cout<<"The value of the hand at this point = "<<value<<endl;
    
    // Input Data Card 2
    cout<<"Input a card A,T,J,Q,K,2-9"<<endl;
    cin>>card;
    // Process Data
    switch(card){
        case'K':
        case'Q':
        case'J':
        case'T':value+=10;break;
        case'9':
        case'8':
        case'7':
        case'6':
        case'5':
        case'4':
        case'3':
        case'2':value+=(card-48);break;
        case'A':value+=11;excess=10;
            
    }
    if(value>21)value-=excess;
    
    // Output Data Card 2
    cout<<"The value of the hand at this point = "<<value<<endl;
        } break;
            
        case 20:{
            cout<<"Savitch chapter 3 problem 9:"<<endl;
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
        } break;
            
        default:
            cout<<"Either you didn't enter a valid number or wanted to exit."<<endl;
            cout<<"If you didn't enter a number, restart this program. Otherwise, thank you for using this program."<<endl;
            
    }
    
    return 0;
}

