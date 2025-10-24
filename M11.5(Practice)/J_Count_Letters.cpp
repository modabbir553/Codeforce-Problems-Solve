#include <iostream>
#include <cstring>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    char str[10000001];
    cin >> str;

    int l = strlen(str);
    int fre[26] = {0};
    char alpha[27];
    int v;

    for (int i = 0; i < l; i++)
    {
        v = (int)str[i] - 97;
        fre[v] += 1;
        alpha[v] = str[i];
    }

    for (int j = 0; j < 26; j++)
    {
        if (fre[j] != 0)
        {
            // printf("%c : %d\n", alpha[j], fre[j]);
            cout << alpha[j] << " : " << fre[j] << endl;
        }
    }
    return 0;
}