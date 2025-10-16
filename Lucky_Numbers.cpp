#include <iostream>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    int n,d1, d2;
    cin >> n;
    
        d1 = n%10;
        n = n/10;
        d2 = n%10;

        if(d1%d2 == 0 || d2%d1 == 0){
            cout << "YES";
        }
        else{
            cout << "NO";
        }

    return 0;
}