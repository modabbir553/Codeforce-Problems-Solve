#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i<n; i++){
        char str1[100];
        cin >> str1;
        
        if(strlen(str1) <= 10){
            cout << str1 << endl;
        }
        else {
            cout << str1[0] << strlen(str1) - 2 << str1[strlen(str1)-1] << endl;
        }
    }
    return 0;
}