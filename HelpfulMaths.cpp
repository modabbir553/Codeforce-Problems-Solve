#include <iostream>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

    string str1, str2;
    cin >> str1;

    int len = str1.length();
    int num[len];
    int j =0;
    for(int i = 0; i<len; i++){
        if(str1[i] != '+'){
            str2 = str1[i];
            num[j] = stoi(str2);
            j++;
        }
    }

    for (int i = 0; i < j - 1; i++) {
        for (int k = 0; k < j - i - 1; k++) {
            
            if (num[k] > num[k + 1]) {
                swap(num[k], num[k + 1]);
            }
        }
    }

    for(int p=0; p<j; p++){
        cout << num[p];
        if(p+1 != j){
            cout << '+';
        }
    }
    return 0;
}