#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n1, n2;
    cin >> n1 >> n2;
    int count = 0;

    while (n1 <= n2)
    {
        n1 = n1 * 3;
        n2 = n2 * 2;
        count++;
    }
    cout << count;
    return 0;
}