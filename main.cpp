#include <iostream>
#include "board.h"
#include "player_input.h"
#include "WinCheck.h"

using namespace std;

int main() {
    char playAgain;
    player players[2]; 

    do {
        initializeBoard();
        input_info(players);
        int turn = 0;

        while(true) {
            drawBoard();
          
            if (!make_move(players, turn, board)) {
                cout << "Invalid! Try again.\n";
                continue;
            }

            char currentPlayerSymbol = players[turn].type;

            if (checkWin(currentPlayerSymbol)) {
                drawBoard();
                cout << "Player " << players[turn].name << " Wins!\n";
                break;
            }
            
            if (checkDraw()) {
                drawBoard();
                cout << "Draw!\n";
                break;
            }

            turn = (turn == 0) ? 1 : 0;
        }
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    } while(playAgain == 'y' || playAgain == 'Y');
    return 0;
}
