File Edit Options Buffers Tools C++ Help
#include <iostream>

using namespace std;
bool legalMove(char board[3][3], char marker[2]);
bool checkWin(char board[3][3]);
//char [3][3] placeMarker(char board[3][3], char marker[2]);

void printBoard(char board[3][3]);
int main(){

  char board[3][3];
  char move[3];
  bool p1turn = true;
  for(int a = 0; a < 3; a++){
    for(int b = 0; b < 3; b++){
      board[a][b] = ' ';
    }
  }
  printBoard(board);
  cout << "welcome to tictactoe! input your moves in the format a0, b1, etc." << endl;

  while(true){
    cout << "input your move: " << endl;
    cin.get(move,3);
    cin.get();
    if(legalMove(board, move)){
      cout << move <<endl;
      break;
    }
    else{
      cout << "wrong format move" << endl;
    }
  }
}

bool legalMove(char board[3][3], char marker[2]){
  //check if the input is a legal move
  return true;
}

bool checkWin(char board[3][3]){
  //check for wins or ties
  return true;
}
//char [3][3] placeMarker(char board[3][3], char marker[2]){
  //place the marker
//}

void printBoard(char board[3][3]){
  char line[5];
  line[4] = '\0';
  cout << " abc" << endl;
  for(int a = 0; a < 3; a++){
    line[0] = char(a+48);
    for(int b = 0; b < 3; b++){
      line[b+1] = board[a][b];
    }
    cout << line << endl;
  }
}

