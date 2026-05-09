#include <iostream>
#include "board.h"
#include "player_input.h"
#include "WinCheck.h"
using namespace std;
bool checkWin(char player) {

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j <= 1; j++) { 

            if (board[i][j] == player &&
                board[i][j+1] == player &&
                board[i][j+2] == player) {
                return true;
            }
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j <= 1; j++) {
            if (board[j][i] == player &&
                board[j+1][i] == player &&
                board[j+2][i] == player) {
                    
                  return true;
            } 
        }
    }
 
    for (int i = 0; i <= 1; i++) {
        for (int j = 0; j <= 1; j++) {
            
            if ( board[i][j] == player &&
                 board[i+1][j+1] == player &&
                 board[i+2][j+2] == player){
                    return true;
                 }
            
            if (board[i][j+2] == player &&
                board[i+1][j+1] == player &&
                board[i+2][j] == player){
                  
                    return true;
                }
        }
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