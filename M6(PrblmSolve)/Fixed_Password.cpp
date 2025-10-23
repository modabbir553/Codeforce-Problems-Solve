#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int pass = 1999;
    int num;

    while (1 > 0)
    {
        cin >> num;
        if (num == pass)
        {
            cout << "Correct";
            break;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }
    return 0;
}