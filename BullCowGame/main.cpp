//
//  main.cpp
//  BullCowGame
//
//  Created by Grant Rosario on 6/4/17.
//  Copyright © 2017 Grant Rosario. All rights reserved.
//

/* This is the console executable that makes use of the BullCowClass
 This acts as the view in a MVC pattern, and is resopnisble for all user interaction.
 For game logic, see the FBullCowGame class.
 */

#include <iostream>
#include <string>
#include "FBullCowGame.hpp"

using FText = std::string;
using int32 = int;

void PrintIntro();
void PlayGame();
FText GetGuess();
bool AskToPlayAgain();

FBullCowGame BCGame; // Instantiate a new game

int main()
{
    std::cout << BCGame.GetCurrentTry();
    
    PrintIntro();
    PlayGame();
    // TODO add a game summary
    return 0;
}



void PrintIntro()
{
    // Introduce the game
    constexpr int32 WORD_LENGTH = 9;
    std::cout << "Welcome to Bulls and Cows, a fun word game.\n";
    std::cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?\n\n";
    return;
}

void PlayGame()
{
    BCGame.Reset();
    int32 MaxTries = BCGame.GetMaxTries();
    
    do
    {
        // Loop for the number of turns asking for guesses
        // TODO change from FOR to WHILE loop once we are validating tries
        constexpr int32 GUESS_AMT = 5;
        for(int32 i = 0; i < GUESS_AMT; i++)
        {
            FText Guess = GetGuess(); // TODO make loop checking valid
            
            // Submit valid guess to game
            // Print number of bulls and cows
            
            std::cout << "Your guess was: " << Guess << std::endl;
            std::cout << std::endl;
        }
        
        // TODO summarize game
    } while(AskToPlayAgain() == true);
}

FText GetGuess()
{
    int32 MyGuess = BCGame.GetCurrentTry();
    std::cout << MyGuess << std::endl;
    
    // Get guess from player
    std::cout << "Enter your guess: ";
    FText Guess = "";
    getline(std::cin, Guess);
    return Guess;
}

bool AskToPlayAgain()
{
    std::cout << "Do you want to play again? (y/n) ";
    FText Response = "";
    getline(std::cin, Response);
    return (Response[0] == 'y') || (Response[0] == 'Y');
}
