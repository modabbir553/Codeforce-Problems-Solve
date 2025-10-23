#include <iostream>
#include <cstring>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    int n;
    int w,h;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> w >> h;
        if(w == h){
            cout << "Square" << endl;
        }
        else{
            cout << "Rectangle" << endl;
        }
    }
    return 0;
}