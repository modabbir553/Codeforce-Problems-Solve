#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int count = 0;
    string str;
    cin >> str;

    if (str.length() > n)
    {
        return 0;
    }

    for (int j = 1; j < n; j++)
    {
        if (str[j] == str[j - 1])
        {
            count++;
        }
    }

    cout << count;
    return 0;
}
