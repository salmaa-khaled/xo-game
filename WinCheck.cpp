#include <iostream>
#include "board.h"
#include "player_input.h"
#include "WinCheck.h"
using namespace std;
bool checkWin(char player) {

    for (int i = 0; i < 4; i++) {
        if (board[i][0] == player &&
            board[i][1] == player &&
            board[i][2] == player &&
            board[i][3] == player) {
            return true;
        }
    }

    for (int i = 0; i < 4; i++) {
        if (board[0][i] == player &&
            board[1][i] == player &&
            board[2][i] == player &&
            board[3][i] == player) {
            return true;
        }
    }
 
    for (int i = 0; i <= 1; i++) {     
           if (board[0][0] == player &&
                board[1][1] == player &&
                board[2][2] == player &&
                board[3][3] == player) {
                return true;
        }
    }
            
            if (board[0][3] == player &&
                board[1][2] == player &&
                board[2][1] == player &&
                board[3][0] == player) {
                return true;
          }
        


    return false; 
}

bool checkDraw() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (board[i][j] == ' ') { 
                
                return false; 
            }
        }
    }
    return true; 
}
