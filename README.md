# Tic Tac Toe Game in C++
---
## Description
This project implements a simple Tic Tac Toe game using C++ for two players (x and o).  
The game allows players to place their marks on a 3x3 grid, ensuring no invalid or duplicate moves are made.  
The game ends when either one of the players wins or all moves are exhausted, resulting in a draw.

---

## Features
1. Game Board Representation:  
   - A 3x3 char array represents the game board with numbers (1-9) indicating valid moves.
   
2. Player Input Validation:  
   - Ensures players can only select valid, unoccupied positions on the board.
   
3. Winner Detection:  
   - Checks all possible winning combinations (rows, columns, diagonals).
   
4. Game Replay Option:  
   - After the game ends, players can choose to replay with a reset game board.

5. Interactive Console Interface:  
   - Displays the game board after every move and provides error messages for invalid inputs.

---

## How It Works
1. The board starts with positions numbered 1 to 9.
2. Players take turns to enter the position where they want to place their mark (x or o).
3. The program validates the move, updates the board, and checks for a winner after every turn.
4. If a player wins, the game announces the winner and ends.
5. If the board is full and no winner exists, the game announces a draw.
6. Players can replay or exit after a game ends.

---

## What I Did
1. Game Logic Implementation:  
   - Implemented the logic for validating moves, updating the board, and checking for a winner.
   
2. Dynamic Board Reset:  
   - Added functionality to reset the board when players choose to replay the game.

3. Interactive Input Handling:  
   - Ensured smooth player interactions with clear prompts and error messages.

4. Replay Option:  
   - Allowed players to replay the game multiple times without restarting the program.

5. Error Handling:  
   - Handled invalid moves, such as selecting an already occupied spot or an invalid number.

---
