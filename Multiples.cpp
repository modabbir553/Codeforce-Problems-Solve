#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a, b;
    cin >> a >> b;
    if(a%b==0){
        cout << "Multiples";
    }
    else if(b%a == 0){
        cout << "Multiples";
    }
    else{
        cout << "No Multiples";
    }
    return 0;
}