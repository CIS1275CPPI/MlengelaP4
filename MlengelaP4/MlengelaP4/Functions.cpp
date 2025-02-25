/************************************************************************
* Program: C++ Craps Game
* Programmer: Daudi Mlengela (dmlengela@cnm.edu)
* Date: 27 October 2021 @ 11:00 am
* Purpose: Functions in files, random numbers, stringstream, and precision.
*************************************************************************/

#include <iostream>
#include <string>
#include <iomanip>

#include"Functions.h"

/*********************************************************************************
* We need to display header that tells the user what this program does. 
**********************************************************************************/

void WriteHeader(void)
{
    cout << "Name: Bruce Wayne\n";
    cout << "Program Title: C++ Craps Game\n";
    cout << "Program Objective: Allow the user to play craps\n\n";
}
/**********************************************************************************
* We need to set & display the rules of the Craps Game to the user.
**********************************************************************************/
void ShowRules(void)
{
    cout << "   Craps is a popular dice game played in casinos.\n";
    cout << "   The C++ variation is as follows:  Make a bet.  Roll two dice.\n";
    cout << "   Each die has six faces, representing values 1-6.\n";
    cout << "   Check the sum of the faces showing on the two dice: \n";
    cout << "   If the sum is 2, 3 or 12 (craps), you lose. \n";
    cout << "   If the sum is 7 or 11 (natural), you win.  \n";
    cout << "   If the sum is anything else, a point is established\n";
    cout << "   (the sum of the dice you rolled) and you continue to\n";
    cout << "   roll until you re-roll the point (you win)\n";
    cout << "   or you roll a 7 (you lose).\n\n";
}
/**********************************************************************************
* We need to get the user's bet.
* The bet minimum is $5.00 and can only be increased in increments of $5.00
***********************************************************************************/
double EnterYourBet(void)
{
    double bet = 0.0;
    bool  go = true;

    while (go)
    {
        cout << "Enter your bet, minimum is $5.00 with $5.00 increments: ";
        cin >> bet;

        if (bet >= 5.0 && fmod(bet, 5.0) == 0)
        {
            break;
        }
    }

    return(bet);
}

/*****************************************************************************************
 * The user need to play the game. Throw the dice, play the point round if necessary. 
 * We need to call ThrowDice and PlayPointRound and Return true for a win, false for a loss.
 * 
******************************************************************************************/
bool MakeYourPlay(void)
{
    int value = ThrowDice();

    if (value == 2 || value == 3 || value == 12)
    {
        return(false);
    }

   if (value == 7 || value == 11)
    {
       return(true);
    }

   cout << "(point round)\n";

   return(PlayPointRound(value));
}
/*********************************************************************************
* The user should throw the dice to play the game that 
* shows and returns sum of the two dice thrown. 
**********************************************************************************/
int ThrowDice(void)
{
    int srand(123);
    int first = rand() % 6 + 1;
    int second = rand() % 6 + 1;

    int total = first + second;
    {
        cout << "roll: " << total << "\n";
    }
    return(total);
}
/***********************************************************************************
* The user need to throw until the point is made or 7 is hit. 
* Returns true for a win, false for a  loss.
************************************************************************************/
bool PlayPointRound(int dice)
{
    for (int i = 1; i <= 6; ++i)
    {
        int value = ThrowDice();
        if (value == dice)
        {
            return(true);
        }
        if (value == 7)
        {
            break;
        }
    }
    return(false);
}
/*******************************************************************************
* We need to keep track of the player’s balance. 
********************************************************************************/
double UpdateBalance(bool didWin, double bet)
{
    extern double gBalance;

    if (didWin)
    {
        return(gBalance + bet);
    }

    else
    {
        return(gBalance - bet);
    }
}





