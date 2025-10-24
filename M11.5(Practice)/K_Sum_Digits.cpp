#include <iostream>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    int n,v;
    int sum = 0;
    cin >> n;
    char ar[n];

    for(int i = 0; i<n; i++){
        cin >> ar[i];
    }

    for(int i = 0; i<n; i++){
        v =(int)ar[i] - 48;
        sum += v;
    }
    cout << sum;
    return 0;
}