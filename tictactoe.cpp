#include <bits/stdc++.h>
using namespace std;

void displayBoard(vector<vector<int>> board) {
    cout << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 11; j++) {
            if (i % 2 == 0 && j % 4 == 1) {
                if (board[i / 2][j / 4] == 1)
                    cout << "X";
                else if (board[i / 2][j / 4] == 2)
                    cout << "O";
                else
                    cout << " ";
            }
            else if (i % 2 == 0 && (j == 3 || j == 7)) 
                cout << "|";
            else if (i % 2 == 1 && (j == 3 || j == 7)) 
                cout << "|";
            else if (i % 2 == 1) 
                cout << "-";
            else 
                cout << " ";
        }
        cout << endl;
    }
    cout << endl;
}

bool checkRow(int i, vector<vector<int>> board) {
    return (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != 0);
}

bool checkCol(int j, vector<vector<int>> board) {
    return (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != 0);
}

bool checkDia(vector<vector<int>> board) {
    return ((board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != 0) ||
            (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != 0));
}

bool checkWin(int row, int col, vector<vector<int>> board) {
    return checkRow(row, board) || checkCol(col, board) || checkDia(board);
}

bool isComplete(vector<vector<int>> board) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == 0)
                return false;
        }
    }
    return true;
}

bool isValidMove(int row, int col, vector<vector<int>> board) {
    return (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == 0);
}

int main() {
    vector<vector<int>> board(3, vector<int>(3, 0));
    int row, col;

    cout << "Welcome To The TicTacToe Game\n";
    displayBoard(board);

    while (!isComplete(board)) {
        cout << "Player 1 play(X)\n";
        cin >> row >> col;

        while (!isValidMove(row, col, board)) {
            cout << "Invalid move. Try again.\n";
            cin >> row >> col;
        }

        board[row][col] = 1;
        displayBoard(board);

        if (checkWin(row, col, board)) {
            cout << "Player 1 Wins!" << endl;
            break;
        }
        if (isComplete(board)) {
            cout << "It's a Tie!" << endl;
            break;
        }

        cout << "Player 2 play(O)\n";
        cin >> row >> col;

        while (!isValidMove(row, col, board)) {
            cout << "Invalid move. Try again.\n";
            cin >> row >> col;
        }

        board[row][col] = 2;
        displayBoard(board);
        if (checkWin(row, col, board)) {
            cout << "Player 2 Wins!" << endl;
            break;
        }
        if (isComplete(board)) {
            cout << "It's a Tie!" << endl;
            break;
        }
    }
    return 0;
}
