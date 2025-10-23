#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    char str[100001];
    cin.getline(str, 100001);

    for (int i = 0; i < strlen(str); i++)
    {
        if (islower(str[i]) || str[i] == ',')
        {
            if (str[i] == ',')
            {
                str[i] = ' ';
            }
            else
            {
                str[i] = toupper(str[i]);
            }
        }
        else
        {
            str[i] = tolower(str[i]);
        }
    }
    cout << str;
    return 0;
}