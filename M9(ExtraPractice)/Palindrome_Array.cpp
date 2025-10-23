#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int j = 0; j < n; j++)
    {
        if (arr[j] != arr[n - j - 1])
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