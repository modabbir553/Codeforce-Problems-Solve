#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << -1;
    }
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}