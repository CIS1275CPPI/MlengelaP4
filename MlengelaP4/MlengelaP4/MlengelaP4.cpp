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

using namespace std;

double gBalance = 200.0;

int main()

    {
        WriteHeader();

        /**********************************************************************
        * We need to declare.  
        ***********************************************************************/
        string playerName;
        bool   DoAnother;
        int    gamesWon{ 0 };
        int    gamesLost{ 0 };
        

        /*********************************************************************************
        * We need to do-while loop that to allows a player to play as many times as he wants.  
        *********************************************************************************/
        do
        {
            /***********************************************
            * Get the player's name. 
            ************************************************/
            string playerName;
            cout << "Please enter your name to start playing a game: ";
            getline(cin, playerName);
            cout << "Hello " << playerName << "Welcome to C++ Craps Game. \n";
      

            /***************************************************************************
            * We need to get the user's bet.
            * The bet minimum is $5.00 and can only be increased in increments of $5.00
            ****************************************************************************/
            double bet = EnterYourBet();
            cout << "Bet is: $" << fixed << setprecision(2) << bet << "\n";
            bool wonGame = MakeYourPlay();

            if (wonGame)
            {
                gamesWon++;
            }
            else
            {
                gamesLost++;
            }
            /********************************************************************
            * * We need to keep track of the player’s balance in $.
            *********************************************************************/
            gBalance = UpdateBalance(wonGame, bet);
            {

                cout << "Balance now: $" <<
                    fixed << setprecision(2) << gBalance << "\n";
            }
            /*****************************************************************
            * We need to ask the user if they want to play again.
            * The user is givin the choices as an answer.  
            ******************************************************************/
            bool   DoAnother();
            {
                string answer;
                cout << "Do you want to play again? ";
                cin >> answer;
                cin.ignore();

                if (answer[0] != 'y' && answer[0] != 'Y')
                {
                    break;
                }
            }
        } while (true);

        /****************************************************************************
*        * We need to display a summary of the user’s games, starting with the user’s name, 
         * The number of games won, the number of games lost, and the final money balance. 
         * We use precision and $ to show money correctly.   
        *****************************************************************************/
        void DisplayResultsToUser();
        {
            cout << "Name: " << "Bruce Wayne." << playerName << "\n";
            cout << "Games Won: " << gamesWon << "\n";
            cout << "Games Lost: " << gamesLost << "\n";
            cout << "Final Money Balance $: " <<
                fixed << setprecision(2) << gBalance << "\n";
        }

        /*************************************************************************
        * Say good bye to the user and thank them
        **************************************************************************/
        void SayGoodbyeToUser();
        {
          cout << "Thank you and Goodbye!\n";
        }

       
    }




