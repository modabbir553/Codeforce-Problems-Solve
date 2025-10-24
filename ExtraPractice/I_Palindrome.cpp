#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    char str[1001];
    cin.getline(str, 1001);

    for (int j = 0; j < strlen(str); j++)
    {
        if (str[j] != str[strlen(str) - j - 1])
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    {
        cout << "YES" << endl;
    }
    return 0;
}