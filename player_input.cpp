#include"player_input.h"
#include <iostream>
using namespace std;

void input_info(player  input[2]) {

    cout<<"Please enter player 1"<<" name: ";
    cin>>input[0].name;
    cout<<"Choose  X or O :\n";
    cin>>input[0].type;
    cout<<"Please enter player 2"<<" name: ";
    cin>>input[1].name;
    cout<<"Choose X or O :\n";
    cin>>input[1].type;
    
}


bool make_move(player p[], int index, char arr[4][4]) {
    int r, c;
    cout << "Turn of: " << p[index].name << " (" << p[index].type << ")" << endl;
    cout << "Row (0-3): "; cin >> r;
    cout << "Col (0-3): "; cin >> c;

    if (r >= 0 && r <= 3 && c >= 0 && c <= 3 && arr[r][c] == ' ') {
        p[index].row = r;
        p[index].col = c;
        arr[r][c] = p[index].type;
        return true; 
    }
    
    return false;
}
