//============================================================================
// International Year One in Engineering-Computer Science
// Name                 : Individual Project
// Author               : Gabriella Keisha Andini
// Student Number       : 40392749
// Module               : Object Oriented Programming
// Date                 : April 2023
//============================================================================

/*
 * CoinToss.h
 *
 */

#ifndef COINTOSS_H_
#define COINTOSS_H_
#include "Thrown.h"


class CoinToss : public Thrown {
private:
    int coinThrown;

public:
    CoinToss();
    void thrownOneCoin();
    int giveOneCoinThrownResult() const;
};

#endif // COINTOSS_H_
