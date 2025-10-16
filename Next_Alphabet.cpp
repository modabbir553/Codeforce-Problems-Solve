#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    char c;
    cin >> c;
    if (c == 'z')
    {
        c = 'a';
        cout << c;
        return 0;
    }
    char Nextalpha = (char)c + 1;
    cout << Nextalpha;
    return 0;
}