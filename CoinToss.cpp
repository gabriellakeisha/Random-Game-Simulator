//============================================================================
// International Year One in Engineering-Computer Science
// Name                 : Individual Project
// Author               : Gabriella Keisha Andini
// Student Number       : 40392749
// Module               : Object Oriented Programming
// Date                 : April 2023
//============================================================================

/*
 * CoinToss.cpp
 *
 */

#include "CoinToss.h"


CoinToss::CoinToss() : Thrown(2) {
    coinThrown = 0;
}

void CoinToss::thrownOneCoin() {
    coinThrown = giveAnumber();
}

int CoinToss::giveOneCoinThrownResult() const {
    return coinThrown;
}
