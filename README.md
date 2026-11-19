# Tic-Tac-Toe Game

A console-based, two-player Tic-Tac-Toe game written in C. The project demonstrates fundamental C programming concepts, including arrays, functions, loops, conditional logic, formatted input and output, and console manipulation.

The implementation uses a one-dimensional character array to represent the 3 x 3 game board instead of a two-dimensional array.

## Overview

Two players enter their names and compete in the terminal using a shared board. Player one uses `x`, and player two uses `o`. Players enter a number from `1` to `9` to place their mark in the corresponding board position.

After every valid move, the program checks all winning combinations across rows, columns, and diagonals. The game ends with a winner or a draw when all nine positions have been filled.

## Features

- Two-player console gameplay
- Custom player names
- Loading animation
- Numbered `3 x 3` board display
- Position validation from `1` to `9`
- Detection of already occupied positions
- Automatic win detection
- Draw detection
- Board updates after every valid move
- ANSI terminal escape sequences for clearing and refreshing the console
- No 2D array used for board storage

## Technologies Used

| Technology | Purpose |
|---|---|
| C | Core application logic |
| GCC / a C compiler | Source code compilation |
| Standard C library (`stdio.h`) | Formatted input and output |
| POSIX `unistd.h` | `usleep()` loading animation and console timing |
| ANSI escape sequences | Clear and refresh the terminal screen |

> The included `unistd.h` and `usleep()` calls make the source code most suitable for Linux and Unix-like environments. MinGW or another POSIX-compatible C environment may be required on Windows.

## C Programming Concepts Implemented

- Functions and function prototypes
- Character arrays
- String input with `scanf`
- One-dimensional arrays
- Loops and nested board selection logic
- Conditional statements
- Ternary operators
- Return values
- Formatted input and output
- Function arguments
- Board state management
- Win-condition and draw-condition validation
- Console clearing and screen refresh
- Timed animation using `usleep()`

The board is represented as:

```c
char board[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
```

Positions `1` to `9` are stored in the array using `board[pos - 1]`, avoiding the need for a 2D array.

## Project Structure

```text
Tik_Tac-Toe_Game/
|-- tic_tak_toe.c
`-- README.md
```

| File | Description |
|---|---|
| `tic_tak_toe.c` | Complete source code for the Tic-Tac-Toe game |
| `README.md` | Project documentation |

## Compilation and Execution

### Linux or Unix-like Systems

Open a terminal in the project directory and compile the source file:

```bash
gcc tic_tak_toe.c -o tic_tak_toe
```

Run the executable:

```bash
./tic_tak_toe
```

### Alternative Compiler Command

```bash
gcc -Wall -Wextra tic_tak_toe.c -o tic_tak_toe
```

The `-Wall` and `-Wextra` options enable additional compiler warnings during debugging.

## How to Play

1. Start the program.
2. Enter `Y` to play or `N` to close the application.
3. Enter names for player one and player two.
4. Enter `Y` to continue to the game.
5. Players alternate turns:
   - Player one: `x`
   - Player two: `o`
6. Enter a number from `1` to `9` to place the current player's mark.
7. The program announces the winner or declares a draw after the board is filled.

Board positions correspond to the following layout:

```text
1 | 2 | 3
---------
4 | 5 | 6
---------
7 | 8 | 9
```

## Sample Output

```text
-----------------------------------------------
..................TIC TAK TOE..................
-----------------------------------------------

Want You to Play !! (Y/N) : Y
Enter player1 Name : Alex
Enter player2 Name : Sam

*NOTE : Enter 1-9 to select box..

Alex [x] : 1

        _________________________
        |       |       |       |
        |   x   |   2   |   3   |
        |_______|_______|_______|
        |       |       |       |
        |   4   |   5   |   6   |
        |_______|_______|_______|
        |       |       |       |
        |   7   |   8   |   9   |
        |_______|_______|_______|

Sam [o] : 4

Alex [x] : 2

Sam [o] : 5

Alex [x] : 3

Alex [x] WINSSSSS.!!!
```

The formatting and animation may differ slightly depending on the terminal.

## Interview and Learning Highlights

- Uses a one-dimensional array to model a conventional 3 x 3 board
- Applies direct win checks across every possible row, column, and diagonal
- Validates moves before updating the board
- Alternates players using a character mark
- Uses a move count to determine the draw condition
- Demonstrates console-based UI design without external libraries

## Author

- **GitHub:** [chaureshivam-sudo](https://github.com/chaureshivam-sudo)
- **Repository:** [Tik_Tac-Toe_Game](https://github.com/chaureshivam-sudo/Tik_Tac-Toe_Game)
