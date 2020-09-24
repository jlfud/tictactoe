#include <iostream>

using namespace std;
bool legalMove(char board[3][3], char marker[2]);
bool checkWin(char board[3][3]);
void placeMarker(char &board[3][3], char marker[2], bool turn);

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
  cout << "welcome to tictactoe! input your moves in the format A0, B1, etc." << endl;
  
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
  placeMarker(&board, move, p1turn);
  printBoard(board);
}

bool legalMove(char board[3][3], char marker[2]){
  //check if the input is a legal move
  return true;
}

bool checkWin(char board[3][3]){
  //check for wins or ties
  return true; 
}

void placeMarker(char& board[3][3], char marker[3], bool p1turn){
  //places a marker in the spot
  int x = int(marker[0])-65;
  int y = int(marker)- 48;
  if(p1turn){
    board[y][x] = 'X';
  }
  else{
    board[y][x] = 'O';
  }
  p1turn = !p1turn;
}
void printBoard(char board[3][3]){
  char line[5];
  line[4] = '\0';
  cout << " ABC" << endl;
  for(int a = 0; a < 3; a++){
    line[0] = char(a+48);
    for(int b = 0; b < 3; b++){
      line[b+1] = board[a][b];
    }
    cout << line << endl;
  }
}
