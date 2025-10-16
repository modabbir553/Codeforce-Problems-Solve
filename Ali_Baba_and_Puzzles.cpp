#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long temp;

    temp = a + b - c;
    if (temp == d)
    {
        cout << "YES";
        return 0;
    }
    temp = a - b + c;
    if (temp == d)
    {
        cout << "YES";
        return 0;
    }

    temp = a + b * c;
    if (temp == d)
    {
        cout << "YES";
        return 0;
    }
    temp = a * b + c;
    if (temp == d)
    {
        cout << "YES";
        return 0;
    }

    temp = a - b * c;
    if (temp == d)
    {
        cout << "YES";
        return 0;
    }
    temp = a * b - c;
    if (temp == d)
    {
        cout << "YES";
        return 0;
    }

    cout << "NO";
    return 0;
}
