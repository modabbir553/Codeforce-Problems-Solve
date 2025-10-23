#include <iostream>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    char str[1000001];
    cin.getline(str, 1000001);

    for(int i = 0; str[i] != '\\'; i++){
        cout << str[i];
    }
    return 0;
}