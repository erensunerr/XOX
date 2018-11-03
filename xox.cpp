#include <iostream>
#define ROWS 3
#define COLUMNS 3
using namespace std;


int main()
{

  static char board[ROWS][COLUMNS] = { {' ',' ',' '},
                                      {' ',' ',' '},
                                      {' ',' ',' '}};
  int counter = 0;
  int rowToGet = -1;
  int colToGet = -1;
  while(counter < 10)
  { // Printing the BOARD
    cout << board[0][0] << "|" << board[0][1] << "|" << board[0][2] << endl;
    cout << "-----" << endl;
    cout << board[1][0] << "|" << board[1][1] << "|" << board[1][2] << endl;
    cout << "-----" << endl;
    cout << board[2][0] << "|" << board[2][1] << "|" << board[2][2] << '\n' << endl;

    cout << "Enter the row you want to get." << endl << "->";
    cin >> rowToGet;
    if(rowToGet > ROWS || rowToGet < 1)//ERRCHECK
    {
      cout << "ERROR" << endl;
      return 0;
    }

    cout << "Enter the row you want to get." << endl << "->";
    cin >> colToGet;
    if(colToGet > COLUMNS || colToGet < 1)//ERRCHECK
    {
      cout << "ERROR" << endl;
      return 0;
    }
    if (!(board[rowToGet-1][colToGet-1] == 'O' || board[rowToGet-1][colToGet-1] == 'X'))
    {
      board[rowToGet-1][colToGet-1] = counter % 2 == 0 ? 'O' : 'X';
    }
    else
    {
      cout << "ERROR" << endl;
      return 0;
    }
    // Printing the BOARD
      cout << board[0][0] << "|" << board[0][1] << "|" << board[0][2] << endl;
      cout << "-----" << endl;
      cout << board[1][0] << "|" << board[1][1] << "|" << board[1][2] << endl;
      cout << "-----" << endl;
      cout << board[2][0] << "|" << board[2][1] << "|" << board[2][2] << '\n' << endl;

    // Win check
    for(int i = 0; i < 3; i++){
    if(board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' '){
      cout << board[0][i] << " WINS !" << endl;
      return 0;
    }
    if(board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' '){
      cout << board[i][0] << " WINS !" << endl;
      return 0;
    }
  }
  if(board[0][0] == board[1][1] && board[2][2] == board[1][1] && board[1][1] != ' '){
    cout << board[1][1] << " WINS !" << endl;
    return 0;
  }
  if(board[0][2] == board[1][1] && board[2][0] == board[1][1] && board[1][1] != ' '){
    cout << board[1][1] << " WINS !" << endl;
    return 0;
  }
  counter++;
  }
}
