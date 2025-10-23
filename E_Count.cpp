#include <iostream>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    char str[1000001];
    cin.getline(str, 1000001);
    int sum = 0,n;

    for(int i = 0; str[i] != '\0'; i++){
        n= (int) str[i] - 48;
        sum += n;
    }
    cout << sum;
    return 0;
}