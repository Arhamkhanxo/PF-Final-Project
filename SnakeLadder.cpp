#include <iostream>
using namespace std;
int main ()
{
    int snakeLadder(int position);
    int player1 = 0;
    int player2 = 0;
    int dice;
    cout << "Snake and Ladder Game\n";
    cout << "Dice value between 1 and 6\n\n";
    while (player1 < 100 && player2 < 100)
    {
        cout << "Player 1 turn: ";
        cin >> dice;
        if (dice >= 1 && dice <= 6)
        {
            if (player1 + dice <= 100)
                player1 = player1 + dice;
            player1 = snakeLadder(player1);
            cout << "Player 1 position: " << player1 << endl; }
        else
        {
            cout << "Wrong dice value\n";
        }
        if (player1 == 100)
            break;
        cout << "Player 2 turn: ";
        cin >> dice;
        if (dice >= 1 && dice <= 6)
        {
            if (player2 + dice <= 100)
                player2 = player2 + dice;
            player2 = snakeLadder(player2);
            cout << "Player 2 position: " << player2 << endl; }
        else
        {
            cout << "Wrong dice value\n";
        }
        cout << endl;
    }
    if (player1 == 100)
        cout << "Player 1 Wins";
    else
        cout << "Player 2 Wins";
    return 0;
}
int snakeLadder(int position)
{
    int s[8] = {4, 9, 17, 20, 28, 40, 51, 54}; int e[8] = {14, 31, 7, 38, 84, 59, 67, 34};
    for (int i = 0; i < 8; i++)
    {
        if (position == s[i])
        {
            position = e[i];
        }
    }
    return position;
}
