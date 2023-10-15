//============================================================================
// International Year One in Engineering-Computer Science
// Name                 : Individual Project
// Author               : Gabriella Keisha Andini
// Student Number       : 40392749
// Module               : Object Oriented Programming
// Date                 : April 2023
//============================================================================

/*
 * OneDice.h
 *
 */


#ifndef ONEDICE_H_
#define ONEDICE_H_
#include "Thrown.h"

class OneDice : public Thrown {
private:
    int oneDiceThrown;
public:
    OneDice();
    void thrownOneDice();
    int giveOneThrownResult() const;
};

#endif // ONEDICE_H_
