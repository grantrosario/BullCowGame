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

class FBullCowGame {
public:
    FBullCowGame(); // constructor
    
    int GetMaxTries() const;
    int GetCurrentTry() const;
    bool IsGameWon() const;
    
    void Reset(); // TODO make more rich return value
    bool CheckGuessValidity(std::string); // TODO make a more rich return value
    // provide a method for counting bulls & cows, and increasing try #
    
    
private:
    // see constructor for initialization
    int MyCurrentTry;
    int MyMaxTries;
};

#endif /* FBullCowGame_hpp */
