#include <iostream>
#include <cstring>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char str[1000001];
    cin >> str;
    int l = strlen(str);

    int count[26] = {0};  

    
    for(int i = 0; i < l; i++){
        count[str[i]-'a']++;
    }

    
    for(int i = 0; i < 26; i++){
        if(count[i] > 0){
            char alpha = 'a' + i;
            cout << alpha << " : " << count[i] << endl;
        }
    }

    return 0;
}
