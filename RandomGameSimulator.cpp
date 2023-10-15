//============================================================================
// International Year One in Engineering-Computer Science
// Name                 : Individual Project
// Author               : Gabriella Keisha Andini
// Student Number       : 40392749
// Module               : Object Oriented Programming
// Date                 : April 2023
//============================================================================
#include <iostream>
#include <cmath>
#include "CoinToss.h"
#include "OneDice.h"
#include "TwoDices.h"

using namespace std;

// Function to clean up dynamically allocated memory
void cleanUpMemory(CoinToss* coin, OneDice* dice1, TwoDices* dice2) {
    delete coin;
    delete dice1;
    delete dice2;
}

int main() {
    // Get student number from user
    int studentNumber;
    cout << "Please enter your student number: ";
    cin >> studentNumber;

    // Calculate number of digits in student number
    int numDigits = 0;
    int temp = studentNumber;
    while (temp > 0) {
        numDigits++;
        temp /= 10;
    }

    // check if the number of digits is within the range of 2-8
    if (numDigits < 2 || numDigits > 8) {
    cout << "Invalid student number. Program aborted." << endl;
    return 1;
    }

    // determine the remainder of the student number when divided by 3
    int remainder = studentNumber % 3;

    // split the student number into two halves, excluding the middle digit if the number of digits is odd
    int half1 = studentNumber / static_cast<int>(pow(10, numDigits / 2));
    int half2 = studentNumber % static_cast<int>(pow(10, numDigits / 2));
    if (numDigits % 2 != 0) {
    half1 = studentNumber / static_cast<int>(pow(10, (numDigits / 2) + 1));
    half2 = studentNumber % static_cast<int>(pow(10, numDigits / 2));
    }

    // calculate the sum of products of corresponding digits in the two halves
    int sumProduct = 0;
    while (half1 > 0 && half2 > 0) {
    sumProduct += (half1 % 10) * (half2 % 10);
    half1 /= 10;
    half2 /= 10;
    }

    // calculate the number of throws based on the remainder of the sum of products divided by 50, plus 20
    int numThrows = (sumProduct % 50) + 20;

    // create instances of the appropriate class based on the remainder of the student number
    if (remainder == 0) {
    CoinToss coinToss;
    for (int i = 0; i < numThrows / 2; ++i) {
        coinToss.thrownOneCoin();
        cout << coinToss.giveOneCoinThrownResult() << endl;
    }
        } else if (remainder == 1) {
        OneDice oneDice;
        for (int i = 0; i < numThrows / 2; ++i) {
        oneDice.thrownOneDice();
        cout << oneDice.giveOneThrownResult() << endl;
    }
        } else if (remainder == 2) {
        TwoDices twoDices;
        for (int i = 0; i < numThrows / 2; ++i) {
        twoDices.thrownTwoDices();
        cout << twoDices.giveFirstThrownResult() << " " << twoDices.giveSecondThrownResult() << endl;
    }
        }

return 0;
}
