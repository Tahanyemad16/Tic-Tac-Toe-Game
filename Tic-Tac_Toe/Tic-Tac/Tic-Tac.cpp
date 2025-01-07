#include <iostream>
#include <conio.h>
using namespace std;

char game[3][3] = { '1', '2', '3',
                    '4', '5', '6',
                    '7','8', '9' };
int T = 10;

bool winner(char name) {
    for (int i = 0; i < 3; i++) {
        if (game[0][i] == name && game[1][i] == name && game[2][i] == name)
            return true;
        if (game[i][0] == name && game[i][1] == name && game[i][2] == name)
            return true;
    }
    if (game[0][0] == name && game[1][1] == name && game[2][2] == name)
        return true;
    if (game[2][0] == name && game[1][1] == name && game[0][2] == name)
        return true;

    return false;
}

bool isValidMove(int move) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (game[i][j] == move + '0')
                return true;
        }
    }
    return false;
}

void printBoard() {
    cout << "Game Board :" << endl << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << game[i][j];
            if (j != 2)
                cout << " | ";
        }
        cout << endl;
    }
}

void who_is() {
    while (T--) {
        if (T == 9) {
            printBoard();
        }
        else {
            if (T % 2 == 0) {
                int xx;
                cout << "Where do you want to place your x? ";
                cin >> xx;
                while (!isValidMove(xx)) {
                    system("cls");
                    cout << "This spot is already taken or invalid. Try again." << endl;
                    printBoard();
                    cout << "Where do you want to place your x? ";
                    cin >> xx;
                }
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        if (game[i][j] == xx + '0')
                            game[i][j] = 'x';
                    }
                }
                system("cls");
                printBoard();
                if (winner('x')) {
                    cout << "Game result: x won!" << endl;
                    break;
                }
            }
            else {
                int oo;
                cout << "Where do you want to place your o? ";
                cin >> oo;
                while (!isValidMove(oo)) {
                    system("cls");
                    cout << "This spot is already taken or invalid. Try again." << endl;
                    printBoard();
                    cout << "Where do you want to place your o? ";
                    cin >> oo;
                }
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        if (game[i][j] == oo + '0')
                            game[i][j] = 'o';
                    }
                }
                system("cls");
                printBoard();
                if (winner('o')) {
                    cout << "Game result: o won!" << endl;
                    break;
                }
            }
        }
        if (T == 0) {
            if (!winner('o') && !winner('x'))
                cout << "Game result: no one won" << endl;
            break;
        }
    }
}

void realGm() {
    char num[] = { '1','2','3','4','5','6','7','8','9' };
    int k = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            game[i][j] = num[k];
            k++;
        }
    }
}

int main() {
    char option;
    do {
        T = 10;
        realGm();
        who_is();
        cout << "Do you want to play again (Y/N) : ";
        cin >> option;
        system("cls");
    } while (option == 'Y');
    cout << "Thank you for your time " << endl;

    return 0;
}