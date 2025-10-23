#include <iostream>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    int a,d;
    cin >> a;

        while (a>0)
        {
            d = a%10;
            a = a/10;
        }

        if(d%2 == 0){
            cout << "EVEN";
        }
        else{
            cout << "ODD";
        }

    return 0;
}