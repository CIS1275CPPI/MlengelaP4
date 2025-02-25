/************************************************************************
* Program: C++ Craps Game
* Programmer: Daudi Mlengela (dmlengela@cnm.edu)
* Date: 27 October 2021 @ 11:00 am
* Purpose: Functions in files, random numbers, stringstream, and precision.
*************************************************************************/

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <string>
#include <iostream>
using namespace std; 


void WriteHeader();
void ShowRules();
double EnterYourBet();
string AskForName();
bool MakeYourPlay();
int ThrowDice();
bool PlayPointRound(int dice);
bool DoAnother();
void SayGoodbyeToUser();
double UpdateBalance(bool didWin, double bet);
void DisplayResultsToUser();

#endif // !FUNCTIONS_H

