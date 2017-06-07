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
string GetGuess();


int main()
{
    constexpr int GUESS_AMT = 5;
    
    PrintIntro();
    for(int i = 0; i < GUESS_AMT; i++)
    {
        GetGuess();
    }
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

string GetGuess()
{
    // Get guess from player
    cout << "Enter your guess: ";
    string Guess = "";
    getline(cin, Guess);
    return Guess;
}
