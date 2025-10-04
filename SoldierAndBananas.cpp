#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int k, n, w;
    cin >> k >> n >> w;

    int i = 1;
    int result = 0;
    while (w > 0)
    {
        result = result + i * k;
        w--;
        i++;
    }
    if (result <= n)
    {
        cout << 0;
        return 0;
    }
    int final_result = result - n;
    cout << final_result;
    return 0;
}