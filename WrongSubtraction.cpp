#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n1, n2;
    cin >> n1 >> n2;
    for (int i = 0; i < n2; i++)
    {
        if (n1 % 10 == 0)
        {
            n1 = n1 / 10;
        }
        else
        {
            n1--;
        }
    }
    cout << n1;
    return 0;
}