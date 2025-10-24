#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        char str1[50];
        char str2[50];
        cin >> str1 >> str2;
        int l1 = strlen(str1);
        int l2 = strlen(str2);

        int maxlen;
        if (l1 > l2)
        {
            maxlen = l1;
        }
        else
        {
            maxlen = l2;
        }

        for (int j = 0; j < maxlen; j++)
        {
            if (j > l1 - 1)
            {
                cout << str2[j];
            }
            else if (j > l2 - 1)
            {
                cout << str1[j];
            }
            else
            {
                cout << str1[j] << str2[j];
            }
        }
        cout << endl;
    }
    return 0;
}