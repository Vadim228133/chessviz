#include <iostream>

using namespace std;

void print_chess(char chess[8][8])
{
    for (short int i = 0; i < 8; i++) {
        cout << i + 1 << " ";
        for (short int j = 0; j < 8; j++) {
            cout << "{ " << chess[i][j] << " }";
        }
        cout << endl;
    }
    cout << "    a    b    c    d    e    f    g    h" << endl;
}

int main()
{
    char chess[8][8] = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                        {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};
    print_chess(chess);
    return 0;
}