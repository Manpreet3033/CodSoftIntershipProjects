#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <cstring>
using namespace std;

string player1, player2;
char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
char turn = 'X';
int row, coulumn;
bool match_Draw = false;

class TicTacToe
{
public:
    void enter_Details()
    {
        cin.ignore();
        cout << "\nEnter Player 1 name : ";
        getline(cin, player1);
        cout << "\nEnter Player 2 name : ";
        getline(cin, player2);
        cout << endl
             << endl
             << endl;
    }
    void single_Player()
    {
        cin.ignore();
        cout << "\nEnter Player name : ";
        getline(cin, player1);
    }
    void game_Start()
    {
        // Use this for Windows system("cls");
        // Use this for bash of Linux or MacOS system("clear");
        system("clear");
        cout << endl
             << endl
             << endl;
    }
    void display_Board()
    {
        cout << "\t_________________________" << endl;
        cout << "\t|       |       |       |" << endl;
        cout << "\t|   " << board[0][0] << "   |   " << board[0][1] << "   |   " << board[0][2] << "   |" << endl;
        cout << "\t|_______|_______|_______|" << endl;
        cout << "\t|       |       |       |" << endl;
        cout << "\t|   " << board[1][0] << "   |   " << board[1][1] << "   |   " << board[1][2] << "   |" << endl;
        cout << "\t|_______|_______|_______|" << endl;
        cout << "\t|       |       |       |" << endl;
        cout << "\t|   " << board[2][0] << "   |   " << board[2][1] << "   |   " << board[2][2] << "   |" << endl;
        cout << "\t|_______|_______|_______|" << endl
             << endl
             << endl;
    }
    void playerVsComputer()
    {
    Invalid:
        int choice;
        player2 = "Computer";
        if (turn == 'X')
        {
            cout << "\n"
                 << player1 << "'s [X] turn : ";
        }
        if (turn == 'O')
        {
            cout << "\n"
                 << player2 << "'s [O] turn ";
        }
        if (turn == 'X')
        {
            cin >> choice;
        }
        else if (turn == 'O')
        {
            srand(time(0));
            choice = 1 + (rand() % 9);
        }
        switch (choice)
        {
        case 1:
        {
            row = 0, coulumn = 0;
            break;
        }
        case 2:
        {
            row = 0, coulumn = 1;
            break;
        }
        case 3:
        {
            row = 0, coulumn = 2;
            break;
        }
        case 4:
        {
            row = 1, coulumn = 0;
            break;
        }
        case 5:
        {
            row = 1, coulumn = 1;
            break;
        }
        case 6:
        {
            row = 1, coulumn = 2;
            break;
        }
        case 7:
        {
            row = 2, coulumn = 0;
            break;
        }
        case 8:
        {
            row = 2, coulumn = 1;
            break;
        }
        case 9:
        {
            row = 2, coulumn = 2;
            break;
        }
        default:
        {
            cout << "\nInvalid Choice " << endl;
            cout << "\nPlease enter correct choice !! " << endl;
            goto Invalid;
            break;
        }
        }
        if (turn == 'X' && board[row][coulumn] != 'X' && board[row][coulumn] != 'O')
        {
            board[row][coulumn] = 'X';
            turn = 'O';
        }
        else if (turn == 'O' && board[row][coulumn] != 'X' && board[row][coulumn] != 'O')
        {
            board[row][coulumn] = 'O';
            turn = 'X';
        }
        else if (turn == 'X' && board[row][coulumn] == 'X' && board[row][coulumn] == 'O')
        {
            cout << "\nBox Already Filled by the Opponent..." << endl;
            cout << "\nChoose any other box..." << endl;
            player_Turn();
        }
        else if (turn == 'O' && board[row][coulumn] == 'X' && board[row][coulumn] == 'O')
        {
            srand(time(0));
            choice = 1 + (rand() % 9);
        }
        system("clear");
        cout << endl
             << endl
             << endl;
        display_Board();
    }
    void player_Turn()
    {
    Invalid:
        int choice;
        if (turn == 'X')
        {
            cout << "\n"
                 << player1 << "'s [X] turn : ";
        }
        if (turn == 'O')
        {
            cout << "\n"
                 << player2 << "'s [O] turn : ";
        }
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            row = 0, coulumn = 0;
            break;
        }
        case 2:
        {
            row = 0, coulumn = 1;
            break;
        }
        case 3:
        {
            row = 0, coulumn = 2;
            break;
        }
        case 4:
        {
            row = 1, coulumn = 0;
            break;
        }
        case 5:
        {
            row = 1, coulumn = 1;
            break;
        }
        case 6:
        {
            row = 1, coulumn = 2;
            break;
        }
        case 7:
        {
            row = 2, coulumn = 0;
            break;
        }
        case 8:
        {
            row = 2, coulumn = 1;
            break;
        }
        case 9:
        {
            row = 2, coulumn = 2;
            break;
        }
        default:
        {
            cout << "\nInvalid Choice " << endl;
            cout << "\nPlease enter correct choice !! " << endl;
            goto Invalid;
            break;
        }
        }
        if (turn == 'X' && board[row][coulumn] != 'X' && board[row][coulumn] != 'O')
        {
            board[row][coulumn] = 'X';
            turn = 'O';
        }
        else if (turn == 'O' && board[row][coulumn] != 'X' && board[row][coulumn] != 'O')
        {
            board[row][coulumn] = 'O';
            turn = 'X';
        }
        else
        {
            cout << "\nBox Already Filled by the Opponent..." << endl;
            cout << "\nChoose any other box..." << endl;
            player_Turn();
        }
        system("clear");
        cout << endl
             << endl
             << endl;
        display_Board();
    }
    bool game_Over()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if ((board[i][0] == board[i][1] && board[i][0] == board[i][2]) || (board[0][i] == board[1][i] && board[0][i] == board[2][i]))
                {
                    return true;
                }
                if ((board[0][0] == board[1][1] && board[0][0] == board[2][2]) || (board[0][2] == board[1][1] && board[0][2] == board[2][0]))
                {
                    return true;
                }
            }
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (board[i][j] != 'X' && board[i][j] != 'O')
                {
                    return false;
                }
            }
        }
        match_Draw = true;
        return true;
    }
    void game_Rules()
    {
        cout << "\n1. The game is played on a grid that's 3 squares by 3 squares." << endl;
        cout << "\n2. You are X , your friend is O . Players take turns putting their marks in empty squares." << endl;
        cout << "\n3. The first player to get 3 of his/her marks in a row (up, down, across, or diagonally) is the winner." << endl;
        cout << "\n4. When all 9 squares are full, the game is over. If no player has 3 marks in a row, the game ends in a tie." << endl
             << endl
             << endl;
    }
    void game_Options()
    {
        cout << "\n1. Enter 1 for game rules." << endl;
        cout << "\n2. Enter 2 to start the game." << endl;
        cout << "\nPlease Enter your Choice : ";
    }
};

int main()
{
    TicTacToe game;
    cout << "\nWelcome to Tic Tac Toe Game !! " << endl;
    cout << "\nLet's Move towards the Game options " << endl;
    cout << endl
         << endl;
Label:
    game.game_Options();
    int option;
    cin >> option;
    switch (option)
    {
    case 1:
    {
        cout << endl
             << endl;
        cout << "\n* * * * * Rules of Game * * * * *" << endl;
        game.game_Rules();
        goto Label;
        break;
    }
    case 2:
    {
    Label2:
        cout << "\n1. Player vs Player " << endl;
        cout << "\n2. Player vs Computer " << endl;
        int ch;
        cout << "\nPlease Enter your Choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            cout << "\nPlease Enter Player Names : " << endl;
            game.enter_Details();
            cout << "\nThank You !!" << endl;
            game.game_Start();
            game.display_Board();
            while (game.game_Over() != true)
            {
                game.player_Turn();
                game.game_Over();
            }
            if (turn == 'X' && match_Draw == false)
            {
                cout << "\n* * * * * Congratulations * * * * *" << endl;
                cout << player2 << " [O] Wins the game !! " << endl;
            }
            else if (turn == 'O' && match_Draw == false)
            {
                cout << "\n* * * * * Congratulations * * * * *" << endl
                     << endl
                     << endl;
                cout << player1 << " [X] Wins the game !! " << endl
                     << endl
                     << endl;
            }
            else
            {
                cout << "\n * * * * * Match Draw * * * * *" << endl
                     << endl
                     << endl;
            }
            break;
        }
        case 2:
        {
            game.single_Player();
            cout << "\nThank You !!" << endl;
            game.game_Start();
            game.display_Board();
            while (game.game_Over() != true)
            {
                game.playerVsComputer();
                game.game_Over();
            }
            if (turn == 'X' && match_Draw == false)
            {
                cout << "\n* * * * * Congratulations * * * * *" << endl;
                cout << player2 << " [O] Wins the game !! " << endl;
            }
            else if (turn == 'O' && match_Draw == false)
            {
                cout << "\n* * * * * Congratulations * * * * *" << endl
                     << endl
                     << endl;
                cout << player1 << " [X] Wins the game !! " << endl
                     << endl
                     << endl;
            }
            else
            {
                cout << "\n * * * * * Match Draw * * * * *" << endl
                     << endl
                     << endl;
            }
            break;
        }
        default:
            cout << "\nInvalid Option" << endl
                 << endl;
            goto Label2;
        }
        break;
    }
    default:
    {
        cout << "\nInvalid Option...";
        cout << "\nPlease Choose a Valid Option..." << endl
             << endl;
        goto Label;
        break;
    }
    }
}