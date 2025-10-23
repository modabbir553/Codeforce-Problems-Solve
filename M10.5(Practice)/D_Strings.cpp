#include <iostream>
#include <cstring>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    char str1[11];
    char str2[11];
    char str3[22];
    cin >> str1 >> str2;

    cout << strlen(str1) << " " << strlen(str2) << endl;
    strcpy (str3, str1);
    strcat (str3, str2);
    cout << str3 << endl;
    
    char temp = str1[0];
    str1[0] = str2[0];
    str2[0] = temp;
    cout << str1 << " " << str2;
    return 0;
}