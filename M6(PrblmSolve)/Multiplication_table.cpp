#include <iostream>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    int n;
    cin >> n;

    for(int i = 1; i<=12; i++){
        cout << n << " * " << i << " = " << n*i << endl;
    }
    return 0;
}