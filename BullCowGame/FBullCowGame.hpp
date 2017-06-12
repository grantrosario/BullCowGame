//
//  FBullCowGame.hpp
//  BullCowGame
//
//  Created by Grant Rosario on 6/7/17.
//  Copyright © 2017 Grant Rosario. All rights reserved.
//

#ifndef FBullCowGame_hpp
#define FBullCowGame_hpp

#include <stdio.h>
#include <string>

using FString = std::string;
using int32 = int;

// All values initialized to zero
struct FBullCowCount
{
    int32 Bulls = 0;
    int32 Cows = 0;
    
};

class FBullCowGame {
public:
    FBullCowGame(); // constructor
    
    int32 GetMaxTries() const;
    int32 GetCurrentTry() const;
    bool IsGameWon() const;
    
    void Reset(); // TODO make more rich return value
    bool CheckGuessValidity(FString); // TODO make a more rich return value
    FBullCowCount SubmitGuess(FString);
    
    
private:
    // see constructor for initialization
    int32 MyCurrentTry;
    int32 MyMaxTries;
    FString MyHiddenWord;
};

#endif /* FBullCowGame_hpp */
