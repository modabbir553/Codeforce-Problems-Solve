#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    char letter;
    int result;
    cin >> letter;
    if (letter >= 'a' && letter <= 'z')
    {
        result = letter - 32;
    }
    else
    {
        result = letter + 32;
    }
    letter = (char)result;
    cout << letter;
    return 0;
}