#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, num;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        do
        {
            cout << num % 10 << " ";
            num = num / 10;
        }while (num > 0);
        
        cout << endl;
    }
    return 0;
}