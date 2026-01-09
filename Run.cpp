#include <iostream>
using namespace std;
int main()
{
    char board[3][3] = { {'1','2','3'},
    {'4','5','6'},
    {'7','8','9'},
    };
    char player = 'X';
    int choice;
    bool gameOver = false;
    int step = 0;
    while (!gameOver)
    {
        cout << "\n Tic Tac Toe Game\n\n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
        cout << "\nPlayer " << player << " enter box number: ";
        cin >> choice;
        bool valid = false;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (board[i][j] == choice + '0')
                {
                    board[i][j] = player;
                    valid = true;
                    step++;
                }
            }
        }
        if (!valid) {
            cout << "Invalid move! Try again.\n";
            continue;
        }
        for (int i = 0; i < 3; i++)
        {
            if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
                gameOver = true;
        }
        for (int j = 0; j < 3; j++)
        {
            if (board[0][j] == player && board[1][j] == player && board[2][j] == player)
                gameOver = true;
        }
        if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
            gameOver = true;
        if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
            gameOver = true;
        if (gameOver)
        {
            cout << "\nPlayer " << player << " wins the game!\n";
            break;
        }
        if (step == 9)
        {
            cout << "\nGame Draw!\n";
            break;
        }
        if (player == 'X')
            player = 'O';
        else
            player = 'X';
    }
    return 0;
}
