
/* 
 * File:   U_pirates.cpp
 * Author: Andrew Nicoletti
 * Created on July 18, 2016, 05:50 PM
 * Purpose: 
 */
 
#include <iostream>     // System Library
#include <string>       // String Library
#include <cstdlib>      // Random numbers
#include <cctype>       //isdigit
using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 

// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    string fname,lname,sname="Black Mary",pickA,dayB;
    
    // Input Data
    cout<<"Hello!, what is your first name?"<<endl;
    cin>>fname;
    cout<<fname<<", huh? Not bad I guess. What is your last name?"<<endl;
    cin>>lname;
    cout<<lname<<",...perhaps it's better if I don't ask."<<endl;
    cout<<"You will be embarking on a journey as a pirate of the seven seas!"<<endl;
    cout<<"Your decisions will have an affect on your story, so think carefully!"<<endl;
    cout<<"Most importantly however, have fun!"<<endl;
    cout<<"____________________________________________________________________"<<endl;
    cout<<"                         Unscrupulous Pirates                       "<<endl;
    cout<<"(press enter to continue)"<<endl<<endl<<endl;
    cin.get();
    cin.ignore();
    cout<<"You are on a wooden ship in the middle of the ocean. It is noon judging by the sun"<<endl;
    cout<<"and there is an extreme heat wave bearing down on you. Thirsty, you went for something to drink."<<endl;
    cout<<"In front of you however, is the captain. 5 foot tall bulky and scottish. Wearing a tricone, a prosthetic hook\n and a peg leg.";
    cout<<"\"Arg...there ain't but a wee left innit.\""<<endl;
    cout<<"(press enter to continue)";
    cin.get();
    cout<<"\"The captain glances at you, then eyes at the person behind you."<<endl;
    cout<<"You turn your head to see the XO (executive officer, aka second-in-command)"<<endl;
    cout<<"Who has all of his limbs, a super long braided goatee, dark circles."<<endl;
    cout<<"\"Y'see, water gets moldy after a long while. 'Tis tradition that we"<<endl;
    cout<<"use a bitta rum to stave off the mold.\""<<endl;
    cout<<"\"AYE KNOW WHAT A GROG IS YE HALF TWIT!\" roared the captain."<<endl;
    cout<<"(press enter to continue)";
    cin.get();
    cout<<"\"Aye, but drinking most of the rum then deprives us of drinking water. Captain.\""<<endl;
    cout<<"As much as the captain hated to admit it, his love of rum placed the crew in a bit of a bind."<<endl;
    cout<<"The XO's coy and sly aura didn't help to ease the captains anger neither."<<endl;
    cout<<"(1)We should make course for the nearest port.\n(2)Suggest we reallocate another ships water supply to our own."<<endl;
    cin>>pickA;
    while (pickA!=49||pickA!=50){
        cout<<"Please pick either one or two"<<endl;
        cin>>pickA;
    }
    switch(pickA){
        case '1':{cout<<"\"BAHH!, nearest port ain't not but a den o' theives\"."<<endl;
        cout<<"The captain exclaimed.\"Den of thieves, or scurvy\""<<endl;
        cout<<"The XO looks at his two hands as if he was weighing them."<<endl;
        cout<<"The captain on the other hand knows the XO is right, he grunts a bit."<<endl;
        cout<<"The captain nods his head. \"Might be the best course of action. Alright then, XO set course for port."<<endl;
        cout<<"\"Aye aye cap'n.\" The XO scurries off to the bridge. You hear the boatswains whistle, then the ship turns a hard port."<<endl;
        cout<<"(press enter to continue)";
        cin.get();
        cout<<"You leave the room and go back to the main deck."<<endl;
        cout<<"Of the crew, you spot Bob and Joe sitting on barrels with cards in their hands"<<endl;
        cout<<"They both nonchalantly guard the deck and other cards from tipping as the ship rocks against the waves."<<endl;
        cout<<"\"Hey Bob, you know what I don't get?\""<<endl;
        cout<<"\"Well, apart from a lot of things you don't get, what else little buddy?\""<<endl;
        cout<<"\"Why are bagels called \'bagels\'? They're not seagulls that fly around the bay\""<<endl;
        cout<<"\"Hmm, that's a good question.\" The two acknowledge your approach but continue their game and conversation"<<endl;
        cout<<"\"I mean c'mon, isn't that just a donut?\""<<endl;
        cout<<"\"Donuts are glazed little buddy.\""<<endl;
        cout<<"\"Those are -glazed- donuts.\""<<endl;
        cout<<"\"Then what do you call the plain donuts?"<<endl;
        cout<<"\"A scam.\""<<endl;
        cout<<"After a short time bantering and chatting with the crew, the port is spotted over the horizon and ship anchors aweigh"<<endl;
        cout<<"(press enter to continue)";
        cin.get();
        cout<<"It's port call, everyone is free to do as they want as long as they return for duty."<<endl;
        cout<<"In which case, you are free for 1 day."<<endl;
        cout<<"The captain has a shore party assigned to restock supplies, water included."<<endl;
        cout<<"You think carefully about how you want to spend the rest of your day."<<endl;
        cout<<"(1)Find a place to drink! \n(2)Wander around the city of Juno \n(3)Try your luck at the cards"<<endl;
        cin>>dayB;
        }
        case '2':{cout<<"\"That is always an option.\"Suggested, the XO."<<endl;
        cout<<"\"The waters here ain't be too soft that they keel over.\" The captain brushes his wild untamed beard."<<endl;
        cout<<"He nods slightly after a moment.\"'Tis better to see what we can catch fer today.\""<<endl;
        cout<<"The captain glances at the XO and nods, the XO scurries to the bridge and the ship pulls a starboard."<<endl;
        cout<<"You emerge onto the main deck. You glance around and you see several crew members."<<endl;
        cout<<"You hear chatter amongst the crew members."<<endl;
        cout<<"\"Y'suppose we'll ever see a mermaid?\""<<endl;
        cout<<"\"I dunno and I dun care. Why? What are you gonna do if ya see one eh?"<<endl;
        cout<<"\"Catch it of course!, then maybe...I'ono...\"the crew member shrugs."<<endl;
        cout<<"\"You think we can eat it?\""<<endl;
        cout<<"\"Mermaids are half human right? Maybe we can just eat the lower half?"<<endl;
        cout<<"You ignore the senseless rambling as the crew of the "<<sname<<" is standing by for any \'lucky\' vessels"<<endl;
        cout<<"(press enter to continue)";
        cin.ignore();
        cin.get();
        cout<<"It was sunset, but finally the crew member sitting on the crow's nest has spotted a boat."<<endl;
        cout<<"The "<<sname<<" is pulled up next to the spotted vessel."<<endl;
        cout<<"There seems to be no sign of anyone on board, nor any signs of a stuggle."<<endl;
        cout<<"\"Huh, I wonder how often you come across an empty boat out in the middle of the carribean,\" said Bob."<<endl;
        cout<<"\"Probably about the same chance of the boat actually turning out to be a trap...\" Joe speculated."<<endl;
        cout<<"The boarding crew exchanged glances at each other. What will you do?"<<endl;
        cout<<"(1)Investigate further into the lower decks \n(2)Search on the main deck \n(3)Go into the captains quarters"<<endl;};break;
    }
    
        
      
      
        
        
    
    // Process Data
    
    // Output Data
   
    
    return 0;
}

