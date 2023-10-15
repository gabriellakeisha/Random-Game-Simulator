//============================================================================
// International Year One in Engineering-Computer Science
// Name                 : Individual Project
// Author               : Gabriella Keisha Andini
// Student Number       : 40392749
// Module               : Object Oriented Programming
// Date                 : April 2023
//============================================================================

/*
 * TwoDices.h
 *
 */

#ifndef TWODICES_H_
#define TWODICES_H_
#include "OneDice.h"

class TwoDices : public OneDice {
private:
    int secondThrown;
public:
    TwoDices();
    void thrownTwoDices();
    int giveFirstThrownResult() const;
    int giveSecondThrownResult() const;
};

#endif // TWODICES_H_
