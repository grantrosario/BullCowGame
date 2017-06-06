//
//  main.cpp
//  BullCowGame
//
//  Created by Grant Rosario on 6/4/17.
//  Copyright © 2017 Grant Rosario. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    constexpr int WORD_LENGTH = 5;
    cout << "Welcome to Bulls and Cows, a fun word game." << endl;
    cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?\n";
    return 0;
}
