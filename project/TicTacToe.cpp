#include <iostream>
using namespace std;

char space[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}}; // Change to char array
int row, column;
char tokan = 'x';
string n1, n2; // Global variables for player names

void printBoard()
{
    cout << "   |   |   " << endl;
    cout << " " << space[0][0] << " | " << space[0][1] << " | " << space[0][2] << endl;
    cout << "___|___|___" << endl;
    cout << "   |   |   " << endl;
    cout << " " << space[1][0] << " | " << space[1][1] << " | " << space[1][2] << endl;
    cout << "___|___|___" << endl;
    cout << "   |   |   " << endl;
    cout << " " << space[2][0] << " | " << space[2][1] << " | " << space[2][2] << endl;
    cout << "   |   |   " << endl;
}

void function1()
{
    cout << "Enter the name of the first player: " << endl;
    cin >> n1;
    cout << "Enter the name of the second player: " << endl;
    cin >> n2;
    cout << n1 << " is player1 have X , so they will play first." << endl;
    cout << n2 << " is player2 have O , so they will play second." << endl;
    printBoard(); // Print the initial board
}

bool checkWinner()
{
    // Check rows and columns
    for (int i = 0; i < 3; i++)
    {
        if (space[i][0] == space[i][1] && space[i][1] == space[i][2] || space[0][i] == space[1][i] && space[1][i] == space[2][i])
        {
            return true;
        }
    }

    // Check diagonals
    if (space[0][0] == space[1][1] && space[1][1] == space[2][2] || space[0][2] == space[1][1] && space[1][1] == space[2][0])
    {
        return true;
    }

    return false;
}

bool checkDraw()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (space[i][j] != 'x' && space[i][j] != 'o')
            {
                return false;
            }
        }
    }
    return true;
}

void function2()
{
    int digit;
    string currentPlayer = (tokan == 'x') ? n1 : n2;
    cout << currentPlayer << ", please enter a number (1-9): " << endl;
    cin >> digit;

    // Determine row and column based on the digit
    switch (digit)
    {
    case 1:
        row = 0;
        column = 0;
        break;
    case 2:
        row = 0;
        column = 1;
        break;
    case 3:
        row = 0;
        column = 2;
        break;
    case 4:
        row = 1;
        column = 0;
        break;
    case 5:
        row = 1;
        column = 1;
        break;
    case 6:
        row = 1;
        column = 2;
        break;
    case 7:
        row = 2;
        column = 0;
        break;
    case 8:
        row = 2;
        column = 1;
        break;
    case 9:
        row = 2;
        column = 2;
        break;
    default:
        cout << "Invalid input! Please enter a number between 1 and 9." << endl;
        return; // Exit the function to allow for re-entry
    }

    // Check if the cell is already occupied
    if (space[row][column] != 'x' && space[row][column] != 'o')
    {
        space[row][column] = tokan; // Place the token

        if (checkWinner())
        {
            printBoard();
            cout << currentPlayer << " wins!" << endl;
            exit(0); // Exit the program
        }
        else if (checkDraw())
        {
            printBoard();
            cout << "It's a draw!" << endl;
            exit(0); // Exit the program
        }

        tokan = (tokan == 'x') ? 'o' : 'x'; // Switch player
    }
    else
    {
        cout << "Cell already occupied! Choose another cell." << endl;
    }

    printBoard(); // Print the board after the move
}

int main()
{
    function1(); // Initialize players and print the board
    while (true)
    {
        function2(); // Run game loop
    }
    return 0;
}