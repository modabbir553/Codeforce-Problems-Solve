#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    char str1[20];
    char str2[20];

    cin >> str1 >> str2;
    int i = 0;

    while (1)
    {
        if (str1[i] == '\0' && str2[i] == '\0')
        {
            cout << str1;
            break;
        }
        else if (str1[i] == '\0')
        {
            cout << str1;
            break;
        }
        else if (str2[i] == '\0')
        {
            cout << str2;
            break;
        }
        else if (str1[i] == str2[i])
        {
            i++;
        }
        else if (str1[i] < str2[i])
        {
            cout << str1;
            break;
        }
        else
        {
            cout << str2;
            break;
        }
    }

    return 0;
}

// #include <iostream>
// #include <cstring>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);
//     char str1[20];
//     char str2[20];

//     cin >> str1 >> str2;

//     int v = strcmp(str1, str2);
//     if (v < 0)
//     {
//         cout << str1;
//     }
//     else if (v > 0)
//     {
//         cout << str2;
//     }
//     else
//     {
//         cout << str1;
//     }

//     return 0;
// }