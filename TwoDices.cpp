//============================================================================
// International Year One in Engineering-Computer Science
// Name                 : Individual Project
// Author               : Gabriella Keisha Andini
// Student Number       : 40392749
// Module               : Object Oriented Programming
// Date                 : April 2023
//============================================================================

/*
 * TwoDices.cpp
 *
 */

#include "TwoDices.h"

TwoDices::TwoDices() : OneDice() {
    secondThrown = 0;
}


void TwoDices::thrownTwoDices() {
    thrownOneDice();
    secondThrown = giveAnumber();
}

int TwoDices::giveFirstThrownResult() const {
    return giveOneThrownResult();
}


int TwoDices::giveSecondThrownResult() const {
    return secondThrown;
}
