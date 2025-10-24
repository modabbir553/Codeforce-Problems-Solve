#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    int ar[n];
    int ar2[m + 1] = {0};

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        ar2[ar[i]]++;
    }

    for (int k = 1; k <= m; k++)
    {
        cout << ar2[k] << endl;
    }

    return 0;
}
