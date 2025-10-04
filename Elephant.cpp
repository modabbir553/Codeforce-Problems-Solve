#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int ar[] = {5, 4, 3, 2, 1};
    int count = 0;

    int i = 0;
    while (n > 0)
    {
        if (ar[i] <= n)
        {
            n = n - ar[i];
            count++;
        }
        else
        {
            i++;
        }
    }
    cout << count;
    return 0;
}