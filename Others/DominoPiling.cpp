#include <iostream>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    int m,n;
    cin >> m >> n;
    int boardSize = m*n;
    int result = boardSize / 2;
    cout << result;
    return 0;
}