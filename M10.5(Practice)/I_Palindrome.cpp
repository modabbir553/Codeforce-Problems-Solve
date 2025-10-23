#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    char str1[1001];
    cin.getline(str1, 1001);

    for (int j = 0; j < strlen(str1); j++)
    {
        if (str1[j] != str1[strlen(str1) - j - 1])
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