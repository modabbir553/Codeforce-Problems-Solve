#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string username;
    cin >> username;

    unordered_set<char> distinct;

    for (char c : username) {
        distinct.insert(c); 
    }

    int count = distinct.size();

    if (count % 2 == 0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }

    return 0;
}
