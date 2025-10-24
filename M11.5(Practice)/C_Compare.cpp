#include <iostream>
#include <cstring>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    char A[100], B[100];
    cin >> A >> B;

    int value = strcmp(A, B);
    if (value < 0)
    {
        cout << A << endl;
    }
    else if (value > 0)
    {
        cout << B << endl;
    }
    else
    {
        cout << A << endl;
    }
    return 0;
}