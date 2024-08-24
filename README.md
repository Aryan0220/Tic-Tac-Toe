# Tic-Tac-Toe Game in C++

This is a simple console-based Tic-Tac-Toe game written in C++. The game allows two players to play against each other on a 3x3 grid.

## Features

- **Two-player mode**: Two players can play the game by taking turns.
- **Input validation**: Ensures that players enter valid moves.
- **Win detection**: Automatically checks for wins across rows, columns, and diagonals.
- **Tie detection**: Declares a tie if the board is full and no player has won.

## How to Play

1. **Clone the Repository**:
   ```bash
   git clone https://github.com/your-username/tic-tac-toe-cpp.git
   cd tic-tac-toe-cpp

2. **Compile the Code**:
    ```bash
    g++ -o tictactoe tictactoe.cpp

3. **Run the Game**:
    ```bash
    ./tictactoe

4. **Gameplay**:

- The game will prompt Player 1 (X) to enter their move by specifying the row and column.
- After Player 1's move, the board is displayed, and Player 2 (O) is prompted to make their move.
- The game will check after each move to see if a player has won or if the game ends in a tie.
- The game will continue until a player wins or all cells are filled (tie).

5. **Game End**:

- The game will announce the winner or declare a tie.
- To play again, simply restart the program.
