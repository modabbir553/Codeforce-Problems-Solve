#include <iostream>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    int n;
    int num, even = 0, odd = 0, pos = 0, neg = 0;
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> num;
        if(num%2 == 0){
            even++;
            if(num > 0){
                pos++;
            }
            else if(num == 0){
                continue;
            }
            else{
                neg++;
            }
        }
        else{
            odd++;
            if(num > 0){
                pos++;
            }
            else if(num == 0){
                continue;
            }
            else{
                neg++;
            }
        }
    }

    cout << "Even: " << even << endl << "Odd: " << odd << endl << "Positive: " << pos << endl << "Negative: " << neg;
    return 0;
}