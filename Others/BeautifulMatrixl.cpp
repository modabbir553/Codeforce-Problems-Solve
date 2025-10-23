#include <iostream>
using namespace std;

int moveRow(int i, int targetRow) {
    int moves = 0;
    while (i != targetRow) {
        if (i < targetRow) i++;
        else i--;
        moves++;
    }
    return moves;
}

int moveCol(int j, int targetCol) {
    int moves = 0;
    while (j != targetCol) {
        if (j < targetCol) j++;
        else j--;
        moves++;
    }
    return moves;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int mat[5][5];
    int x = 0, y = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> mat[i][j];
            if (mat[i][j] == 1) {
                x = i;
                y = j;
            }
        }
    }

    int totalMoves = 0;
    totalMoves += moveRow(x, 2);
    totalMoves += moveCol(y, 2);

    cout << totalMoves << "\n";

    return 0;
}
