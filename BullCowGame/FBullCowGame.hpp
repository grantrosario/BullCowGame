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

class FBullCowGame {
public:
    void Reset(); // TODO make more rich return value
    int GetMaxTries();
    int GetCurrentTry();
    bool IsGameWon();
    bool CheckGuessValidity(); // TODO make a more rich return value
    
    
private:
    int MyCurrentTry;
    int MyMaxTries;
};

#endif /* FBullCowGame_hpp */
