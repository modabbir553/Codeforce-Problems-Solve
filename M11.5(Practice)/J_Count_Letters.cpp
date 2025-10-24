#include <iostream>
#include <cstring>
using namespace std;
char str1[10000001];

int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    cin >> str1;

    int l = strlen(str1);
    int fre[26] = {0};
    char alpha[27];
    int v;

    for (int i = 0; i < l; i++)
    {
        v = (int)str1[i] - 97;
        fre[v] += 1;
        alpha[v] = str1[i];
    }

    for (int j = 0; j < 26; j++)
    {
        if (fre[j] != 0)
        {
            cout << alpha[j] << " : " << fre[j] << endl;
        }
    }
    return 0;
}