#include <iostream>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    int n;
    cin >> n;

    int ar[n];

    for(int i =0; i<n; i++){
        cin >> ar[i];
    }

    for(int j = 0; j<n; j++){
        if(ar[j]<= 10 ){
            cout << "A[" << j <<"] = " << ar[j] << endl;
        }
    }
    return 0;
}