#include <iostream>
#include <cstring>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    char str1[20];
    char str2[20];

    cin >> str1 >> str2;
    int i = 0;

    while (1)
    {
        if(str1[i] == '\0' && str2[i] == '\0'){
            cout << str1;
            break;
        }
        else if (str1[i] == '\0'){
            cout << str1;
            break;
        }
        else if (str1[i] == str2[i]){
            i++;
        }
        else{
            cout << str2;
            break;
        }
    }
    
    return 0;
}