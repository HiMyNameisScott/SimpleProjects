//To Do:
    // Make an Array using class_piece
    // Create classes for types
        //Classes should be Pawn, King, Queen, Rook, Knight, Bishop.
        //Class attributes should be: Movement, Color/player

    //Make a board using an array
    //Display board w/ formatting to have a grid



#include <iostream>

using namespace std;

//Functions

void initialize_board(string chess_board[7][7]);
void display_board(string chess_board[7][7]);
int main(){

    const int num_col = 7;
    const int num_row = 7;

    string chess_board[7][7] = { {  } };

    display_board(chess_board);

    cout << "Hello World!" << endl;

    return 0;

}

void initialize_board(string chess_board[][7]){
    for (int i = 0 ; i < 7 ; i++){
        for (int j = 0 ; j < 7 ; j++){
            chess_board[i][j] = "o";
        }
    }
}

void display_board(string chess_board[][7]){
    for (int i = 0 ; i < 7 ; i++){
        for (int j = 0 ; j < 7 ; j++){
            cout << "[ " << chess_board[i][j] << " ] ";
        }
        cout << endl;
    }
    
}