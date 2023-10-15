//============================================================================
// International Year One in Engineering-Computer Science
// Name                 : Individual Project
// Author               : Gabriella Keisha Andini
// Student Number       : 40392749
// Module               : Object Oriented Programming
// Date                 : April 2023
//============================================================================

/*
 * OneDice.cpp
 *
 */


#include "OneDice.h"

OneDice::OneDice() : Thrown(6) {}

void OneDice::thrownOneDice() {
    oneDiceThrown = giveAnumber();
}

int OneDice::giveOneThrownResult() const {
    return oneDiceThrown;
}
