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

FBullCowGame::FBullCowGame()
{
    Reset();
}

void FBullCowGame::Reset()
{
    MyCurrentTry = 1;
    MyMaxTries = MAX_TRIES;
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

