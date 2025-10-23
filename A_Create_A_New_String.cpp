#include <iostream>
#include <cstring>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    char S[1001];
    char T[1001];
    char ST[2002];

    cin >> S >> T;

    cout << strlen(S) << " " << strlen(T) << endl;

    strcpy(ST, S);
    strcat(ST, " ");
    strcat(ST,T);

    cout << ST;
    return 0;
}