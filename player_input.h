#ifndef INPUT_H
#define INPUT_H
#include <string>

struct player {
    std::string name;
    char type;
    int row, col;
};

void input_info(player input[2]);
bool make_move(player p[], int index, char arr[4][4]);


#endif