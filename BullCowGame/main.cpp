//
//  main.cpp
//  BullCowGame
//
//  Created by Grant Rosario on 6/4/17.
//  Copyright © 2017 Grant Rosario. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();
bool AskToPlayAgain();



int main()
{
    PrintIntro();
    PlayGame();
    return 0;
}



void PrintIntro()
{
    // Introduce the game
    constexpr int WORD_LENGTH = 9;
    cout << "Welcome to Bulls and Cows, a fun word game.\n";
    cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?\n\n";
    return;
}

void PlayGame()
{
    do
    {
        // Loop for the number of turns asking for guesses
        constexpr int GUESS_AMT = 5;
        for(int i = 0; i < GUESS_AMT; i++)
        {
            string Guess = GetGuess();
            cout << "Your guess was: " << Guess << endl;
            cout << endl;
        }
    } while(AskToPlayAgain() == true);
}

string GetGuess()
{
    // Get guess from player
    cout << "Enter your guess: ";
    string Guess = "";
    getline(cin, Guess);
    return Guess;
}

bool AskToPlayAgain()
{
    cout << "Do you want to play again? (y/n) ";
    string Response = "";
    getline(cin, Response);
    return (Response[0] == 'y') || (Response[0] == 'Y');
}
