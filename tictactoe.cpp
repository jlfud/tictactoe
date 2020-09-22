#include <iostream>

using namespace std;
bool legalMove(char board[3][3], char marker[2]);
bool checkWin(char board[3][3]);
//char [3][3] placeMarker(char board[3][3], char marker[2]);
void printBoard(char board[3][3]);
int main(){
  char board[3][3];
  for(int a = 0; a < 3; a++){
    for(int b = 0; b < 3; b++){
      board[a][b] = ' '; 
    }
  }
  printBoard(board); 
}
bool legalMove(char board[3][3], char marker[2]){
  //check if the input is a legal move
  return false;
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
    line[0] = char(a);
    for(int b = 0; b < 3; b++){
      line[b+1] = board[a][b];
    }
    cout << line << endl;
  }
}
