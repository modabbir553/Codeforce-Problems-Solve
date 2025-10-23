#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string str;
    cin >> str;
    int l = str.length();
    int upper = 0, lower = 0;

    for (int i = 0; i < l; i++)
    {
        if (str[i] <= 90)
        {
            upper++;
        }
        else
        {
            lower++;
        }
    }

    if (upper <= lower)
    {
        for (char &c : str)
        {
            c = tolower(c);
        }
    }
    else
    {
        for (char &c : str)
        {
            c = toupper(c);
        }
    }

    cout << str;
    return 0;
}