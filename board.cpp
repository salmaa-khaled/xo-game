#include <iostream>
#include "board.h"
using namespace std;

char board[4][4]; 

void initializeBoard() {
    for(int i=0; i<4; i++)
        for(int j=0; j<4; j++) board[i][j] = ' ';
}

void drawBoard() {
    for(int i=0; i<4; i++) {
        cout << "| " ;
        for( int j=0; j<4; j++) {
            cout << board[i][j] << "|";
        }
       cout << endl;
        if (i < 3) {
            cout << "---|---|---|---" << endl;
        }
    }
    cout << endl;
    }


