#include <iostream>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    int n, x;
    cin >> n;
    int ar[n];

    for(int i =0; i<n; i++){
        cin >> ar[i];
    }

    cin >> x;

    for(int j = 0; j<n; j++){
        if(ar[j] == x){
            cout << j;
            return 0;
        }
    }
    cout << -1;

    return 0;
}