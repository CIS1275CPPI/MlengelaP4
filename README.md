# C++ Craps Game

| <img width="301" height="200" alt="image" src="https://github.com/user-attachments/assets/5acaf5dc-f341-4324-bdad-5a3867453dd8" /> |Craps is a popular dice game played in casinos. The C++ Make a bet. Roll two dice. Each dice has 6 faces, representing values 1-6. Check the sum of the faces showing on the dice: If the sum is 2, 3, or 12 (craps), you lose. If the sum is 7 or 11 (natural), you win. If the sum is anything else, a point is established (the sum of the dice you rolled), and you continue to roll until you re-roll the point(you win) or you roll a 7 (you lose). |
|------------------------------------------------------------------------------------------------------------------------------------ | --------------------------------------------------------------------------------------------------------------------------------------|

## Begin by writing pseudocode for Program 4.

Then write hand calculations for this test case:
It is difficult to create a test case when we use random numbers.  So this one is different.   Seed your random number generator with the number 123.  This should be the sequence of values of the dice rolls that you will get.  Compare it to your program to see if is running correctly.

Roll 7, you win, then play another game.
Roll 7, you win, then play another game.
roll 8, then in the point round, roll 9, then roll 8, then play another game.
Roll 7, you win, then play another game.
Roll 11, you win, then play another game.
Roll 9, then in the point round, roll 9 again.  You win, then play another game.
Roll 3, craps, you lose, then play another game.
Roll 9, then in the point round, roll 3, then roll 12, then roll 6, then roll 8, then roll 5, then roll 8, then roll 7. 
You lose.  And stop playing.

## This program will contain 6 functions to be called from the main and from another function.  

The functions will be contained in two files:  Functions.h, which contains the function prototypes, and Functions.cpp, which will contain the function implementations (or bodies).  Do not forget to put include guards in the Functions.h file.  

Begin the program by declaring variables and then calling the function  *WriteHeader*.  This function will display your name, the program title, and the objective.  Then call *ShowRules*, which explains the rules.  

## Seed the random number generator function.

This is only done once.  Call _AskForName_ to get the player’s name.  This function returns a string with the player’s name.

## Open a do-while or while loop.
This is the "play loop," which allows the user to play craps as many times as they want.  Call the function _AskForBet_ to return the amount of the user’s bet.  The bet minimum is $5.00 and can only be increased in increments of $5.00.  The amount of the bet is a double or a float.  Assume that the player begins with a balance of $200.00 in their pocket.

Call _MakeYourPlay_.   _MakeYourPlay_ calls  _ThrowDice_, which displays the sum of the values of the faces of the two dice rolled.  _ThrowDice_ returns the sum to _MakeYourPlay_.  Check the sum to see if the user won, lost, or has to continue.  If it is a win or a loss, return true or false. If the player continues, call _PlayPointRound_, passing the point (or the sum of the two dice thrown).  _PlayPointRound_ opens a do-while loop and calls _ThrowDice_ until the sum is the point or 7.  If the point was thrown, it returns true for a win.  If 7 is thrown, it returns false.  

Keep track of the player’s money balance as they play craps by calling _UpdateBalance_.  If the player wins, the bet is added to the balance.  If they lose, it is subtracted.  Also, keep track of the number of wins and losses.
Ask the user if they want to play again.  Be sure to give the user the choices as an answer.  When the user is finished, display a summary of the user’s games, starting with the user’s name, the number of games won, the number of games lost, and the final money balance. Use precision and $ to show money correctly.
Then say thank you and goodbye. 

## Function Prototypes. 
| **Return Type**   | **Function Name** | **Function Parameters** | **Description**                                                                               |
| ----------------- | ------------------|-------------------------|-----------------------------------------------------------------------------------------------|
| __void__          | WriteHeader       | ()                      | Write your class header                                                                       |
| __void__          | ShowRules         | ()                      | Display rules of our Craps Game                                                               |
| __string__        | AskForName        | ()                      | Ask for player's name                                                                         |
| __double__        | EnterYourBet      | ()                      | Ask for player's bet                                                                          |
| __bool__          | MakeYourPlay      | ()                      | The logic of the game - throw the dice, play the point round if necessary. Calls ThrowDice and PlayPointRound.  Returns true for a win, false for a loss.   |
| __int__           | ThrowDice         | ()                      | Shows and returns sum of the two dice thrown                                                              |
| __bool__          | PlayPointRound    | (int dice)              | Throw until the point is made or 7 is hit                                                                       |
| __double__        | UpdateBalance     | (bool didWin, double bet)| Keep track of the player's balance                                                              |

# Sources:
# Usage:
# Contributions: 
