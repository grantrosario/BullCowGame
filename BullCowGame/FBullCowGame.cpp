//
//  FBullCowGame.cpp
//  BullCowGame
//
//  Created by Grant Rosario on 6/7/17.
//  Copyright © 2017 Grant Rosario. All rights reserved.
//

#include "FBullCowGame.hpp"

using int32 = int;
constexpr int32 MAX_TRIES = 8;
const FString HIDDEN_WORD = "planet";

FBullCowGame::FBullCowGame()
{
    Reset();
}

void FBullCowGame::Reset()
{
    MyCurrentTry = 1;
    MyMaxTries = MAX_TRIES;
    MyHiddenWord = HIDDEN_WORD;
    return;
}

int32 FBullCowGame::GetMaxTries() const
{
    return MyMaxTries;
}

int32 FBullCowGame::GetCurrentTry() const
{
    return MyCurrentTry;
}

bool FBullCowGame::IsGameWon() const
{
    return false;
}

bool FBullCowGame::CheckGuessValidity(FString)
{
    return false;
}

// Recieves a valid guess, increments turn, and returns count
FBullCowCount FBullCowGame::SubmitGuess(FString)
{
    // increment the turn number
    MyCurrentTry++;
    
    // setup a return variable
    FBullCowCount BullCowCount;
    // loop through all letter in guess
        // compare letters against hidden word
    
    return BullCowCount;
}

