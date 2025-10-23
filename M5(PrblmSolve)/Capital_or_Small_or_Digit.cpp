#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    char c;
    cin >> c;
    int n = c;
    
    if(n >= 48 && n<=57){
        cout << "IS DIGIT";
    }
    else if(n >= 65 && n <= 122){
        cout << "ALPHA" << endl;
        if(n >= 97 && n <= 122){
            cout << "IS SMALL";
        }
        else{
            cout << "IS CAPITAL";
        }
    }
    return 0;
}