//Number guessing game
//Date: 27 Nov 2017

#include <iostream>
#include <cstdlib> //random number library
#include <ctime>   //continuous random for new game library
using namespace std;

//declare variable
int userinput, guess;
int j;
char repeat;

//for function
void random(int);
void newgame(char);

int main(){

cout << "\t###########################################################"<< endl;
cout << "\t#                                                         #"<< endl;
cout << "\t#	                NUMERICAL GAME	                  #"<< endl;
cout << "\t#                                           by afiqharith #"<< endl;
cout << "\t###########################################################"<< endl;
cout << "\n\tRules: \n\t1. Player has total 3 attempts to guess.\n\t2. Player declared win if guess the number correctly within 3 attempts.\n\t3. The range of the number is between 1 to 15." << endl;

random(userinput);

return 0;
}

void random(int userinput){

    srand((int)time(0)); // keep random when user rerun the program
    guess = (rand() % 14); // set random number between in range of 0 to 14 but after random the number will plus 1 which create random no between 1 to 15
    //cout << guess; // testing the random number for reference


    for (j = 1; j <= 3; j++){

        cout << "\n\nPlease guess a number: \n";
        cin >> userinput;

    if(userinput > guess){

        cout << "Incorrect!\n";
        cout << "The number you guess is too high!\n";


    }

    else if(userinput < guess){

        cout << "Incorrect!\n";
        cout << "The number you guess is too low!\n";

    }


    else if(userinput == guess){

        cout << "Congratulation!\n";
        cout << "You guess it correctly!\n";
        break;
    }


    }//for counter

    if( userinput != guess){

        cout << "\nYou lose!\n";
        cout << "The correct number is " << guess << ".\n";

    }// if loop

    cout << "\nDo you want to play again?:\n";
    cin >> repeat;

    newgame(repeat);

}//void random function

void newgame(char repeat){

if(repeat == 'Y' || repeat == 'y'){

    random(userinput);
    }

if(repeat == 'N' || repeat == 'n'){

    cout << "\nThank you for playing!";

    }
} //void repeat function
