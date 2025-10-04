#include <iostream>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    int n;
    cin >> n;
    int team[n][3];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<3; j++){
            cin >> team[i][j];
        }
    }

    int count = 0;
    int num = 0;
    for(int i = 0; i<n; i++){
        count = 0;
        for(int j = 0; j<3; j++){
            if(team[i][j] == 1){
                count++;
            }
        }
        if(count > 1){
            num++;
        }
    }

    cout << num;
    return 0;
}