#include <iostream>
using namespace std;

char table[10] = {'0','1','2','3','4','5','6','7','8','9'};

int winner_check()
{
    if (table[1] == table[2] && table[2] == table[3])

        return 1;
    else if (table[4] == table[5] && table[5] == table[6])

        return 1;
    else if (table[7] == table[8] && table[8] == table[9])

        return 1;
    else if (table[1] == table[4] && table[4] == table[7])

        return 1;
    else if (table[2] == table[5] && table[5] == table[8])

        return 1;
    else if (table[3] == table[6] && table[6] == table[9])

        return 1;
    else if (table[1] == table[5] && table[5] == table[9])

        return 1;
    else if (table[3] == table[5] && table[5] == table[7])

        return 1;
    else if (table[1] != '1' && table[2] != '2' && table[3] != '3'
                    && table[4] != '4' && table[5] != '5' && table[6] != '6'
                  && table[7] != '7' && table[8] != '8' && table[9] != '9')

        return 0;
    else
        return -1;
}

void show_board()
{
    system("cls");
    cout << "\n\n\tTic Tac Toe\n\n";

    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << table[1] << "  |  " << table[2] << "  |  " << table[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << table[4] << "  |  " << table[5] << "  |  " << table[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << table[7] << "  |  " << table[8] << "  |  " << table[9] << endl;

    cout << "     |     |     " << endl << endl;
}

int main()
{
	int player = 1,i,input;

    char mark;
    do
    {
        show_board();
        player=(player%2)?1:2;

        cout << "Player " << player << ", enter a number:  ";
        cin >> input;

        mark=(player == 1) ? 'X' : 'O';

        if (input == 1 && table[1] == '1')

            table[1] = mark;
        else if (input == 2 && table[2] == '2')

            table[2] = mark;
        else if (input == 3 && table[3] == '3')

            table[3] = mark;
        else if (input == 4 && table[4] == '4')

            table[4] = mark;
        else if (input == 5 && table[5] == '5')

            table[5] = mark;
        else if (input == 6 && table[6] == '6')

            table[6] = mark;
        else if (input == 7 && table[7] == '7')

            table[7] = mark;
        else if (input == 8 && table[8] == '8')

            table[8] = mark;
        else if (input == 9 && table[9] == '9')

            table[9] = mark;
        else
        {
            cout<<"Invalid move ";

            player--;
            cin.ignore();
            cin.get();
        }
        i=winner_check();

        player++;
    }while(i==-1);
    show_board();
    if(i==1)

        cout<<"==>\aPlayer "<<--player<<" win ";
    else
        cout<<"==>\aGame draw";

    cin.ignore();
    cin.get();
    return 0;
}




