#include <iostream>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    int max = 0;
    int n, num;
    cin >> n;

    for(int i = 0; i<n; i++){
        cin >> num;
        if(max < num){
            max = num;
        }
    }

    cout << max;
    return 0;
}