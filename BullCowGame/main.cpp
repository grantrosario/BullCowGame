//
//  main.cpp
//  BullCowGame
//
//  Created by Grant Rosario on 6/4/17.
//  Copyright © 2017 Grant Rosario. All rights reserved.
//

#include <iostream>
#include <string>
#include "FBullCowGame.hpp"

void PrintIntro();
void PlayGame();
std::string GetGuess();
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
    constexpr int WORD_LENGTH = 9;
    std::cout << "Welcome to Bulls and Cows, a fun word game.\n";
    std::cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?\n\n";
    return;
}

void PlayGame()
{
    BCGame.Reset();
    int MaxTries = BCGame.GetMaxTries();
    
    do
    {
        // Loop for the number of turns asking for guesses
        // TODO change from FOR to WHILE loop once we are validating tries
        constexpr int GUESS_AMT = 5;
        for(int i = 0; i < GUESS_AMT; i++)
        {
            std::string Guess = GetGuess(); // TODO make loop checking valid
            
            // Submit valid guess to game
            // Print number of bulls and cows
            
            std::cout << "Your guess was: " << Guess << std::endl;
            std::cout << std::endl;
        }
        
        // TODO summarize game
    } while(AskToPlayAgain() == true);
}

std::string GetGuess()
{
    int MyGuess = BCGame.GetCurrentTry();
    std::cout << MyGuess << std::endl;
    
    // Get guess from player
    std::cout << "Enter your guess: ";
    std::string Guess = "";
    getline(std::cin, Guess);
    return Guess;
}

bool AskToPlayAgain()
{
    std::cout << "Do you want to play again? (y/n) ";
    std::string Response = "";
    getline(std::cin, Response);
    return (Response[0] == 'y') || (Response[0] == 'Y');
}
