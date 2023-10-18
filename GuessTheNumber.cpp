#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void guessTheNumber()
{
    cout << "\nEnter Difficulty level : ";
    cout << "\nChoose 1 for Easy!\t";
    cout << "\nChoose 2 for Medium\t";
    cout << "\nChoose 3 for Hard\t";
    cout << "\nChoose 0 for Exiting the game.\t";
    int diff_Choice;
    cout << "\n\n\nEnter your Choice : ";
    cin >> diff_Choice;
    srand(time(0));
    int secret_Num = 1 + (rand() % 100);
    int player_Choice;
    if (diff_Choice == 1)
    {
        cout << "\n\nYou Have 10 choices for finding the secret number between 1 and 100. ";
        int choices_Left = 10;
        for (int i = 1; i <= 10; i++)
        {
            cout << "\n\nGuess the Number : ";
            cin >> player_Choice;
            if (player_Choice == secret_Num)
            {
                cout << "\nWell Played!! You won " << player_Choice << " is the secret number." << endl;
                cout << "\nThanks for playing." << endl;
                cout << "\nPlay the game again with us!!\n\n"
                     << endl;
                break;
            }
            else
            {
                cout << "\nNope, " << player_Choice << " is not the right number\n";
                if (player_Choice > secret_Num)
                {
                    cout << "\nThe secret number is smaller than the number you have chosen\n";
                }
                else
                {
                    cout << "\nThe secret number is greater than the number you have chosen\n";
                }
                choices_Left--;
                cout << "\n"
                     << choices_Left << " choices left.\n"
                     << endl;
                ;
                if (choices_Left == 0)
                {
                    cout << "\nYou could'nt guess the secret number, it was " << secret_Num << " , You Lose !!\n\n";
                    cout << "\nPlay the game again to win!! \n\n";
                }
            }
        }
    }
    else if (diff_Choice == 2)
    {
        cout << "\nYou Have 7 choices for finding the secret number between 1 and 100. ";
        int choices_Left = 7;
        for (int i = 1; i <= 7; i++)
        {
            cout << "\n\nGuess the Number : ";
            cin >> player_Choice;
            if (player_Choice == secret_Num)
            {
                cout << "\nWell Played!! You won " << player_Choice << " is the secret number." << endl;
                cout << "\nThanks for playing." << endl;
                cout << "\nPlay the game again with us!!\n\n"
                     << endl;
                break;
            }
            else
            {
                cout << "\nNope, " << player_Choice << " is not the right number\n";
                if (player_Choice > secret_Num)
                {
                    cout << "\nThe secret number is smaller than the number you have chosen\n";
                }
                else
                {
                    cout << "\nThe secret number is greater than the number you have chosen\n";
                }
                choices_Left--;
                cout << "\n"
                     << choices_Left << " choices left.\n"
                     << endl;
                ;
                if (choices_Left == 0)
                {
                    cout << "\nYou could'nt guess the secret number, it was " << secret_Num << " , You Lose !!\n\n";
                    cout << "\nPlay the game again to win!! \n\n";
                }
            }
        }
    }
    else if (diff_Choice == 3)
    {
        cout << "\nYou Have 5 choices for finding the secret number between 1 and 100. ";
        int choices_Left = 5;
        for (int i = 1; i <= 5; i++)
        {
            cout << "\n\nGuess the Number : ";
            cin >> player_Choice;
            if (player_Choice == secret_Num)
            {
                cout << "\nWell Played!! You won " << player_Choice << " is the secret number." << endl;
                cout << "\nThanks for playing." << endl;
                cout << "\nPlay the game again with us!!\n\n"
                     << endl;
                break;
            }
            else
            {
                cout << "\nNope, " << player_Choice << " is not the right number\n";
                if (player_Choice > secret_Num)
                {
                    cout << "\nhe secret number is smaller than the number you have chosen\n";
                }
                else
                {
                    cout << "\nThe secret number is greater than the number you have chosen\n";
                }
                choices_Left--;
                cout << "\n"
                     << choices_Left << " choices left.\n"
                     << endl;
                ;
                if (choices_Left == 0)
                {
                    cout << "\nYou could'nt guess the secret number, it was " << secret_Num << " , You Lose !!\n\n";
                    cout << "\nPlay the game again to win!! \n\n";
                }
            }
        }
    }
    else if (diff_Choice == 0)
    {
        exit(0);
    }
    else
    {
        cout << "\nWrong choice, Enter a valid choice to play the game! (0,1,2,3)\n\n";
    }
}

int main()
{
    cout << "\nWelcome to Guess The Number Game !! " << endl;
    cout << "\nYou have to Guess a number between 1 and 100. You'll have limited choices based on the difficulty level you choose." << endl;
    cout << "\nGood Luck!!" << endl;
    while (true)
    {
        guessTheNumber();
    }
    return 0;
}
