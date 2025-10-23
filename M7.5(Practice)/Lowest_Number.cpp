#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;

    int ar[n];

    for (int i = 1; i <= n; i++)
    {
        cin >> ar[i];
    }

    int minIndex = 1, min = ar[1];

    for (int j = 2; j <= n; j++)
    {
        if (ar[j] < min)
        {
            min = ar[j];
            minIndex = j;
        }
    }

    cout << min << " " << minIndex;
    return 0;
}