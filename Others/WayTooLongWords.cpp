#include <iostream>
#include <sstream>
#include <string>
using namespace std;

string abbreviateWord(const string& word) {
    if (word.length() > 10) {
        return word[0] + to_string(word.length() - 2) + word[word.length() - 1];
    }
    return word;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    cin.ignore();

    string text[n];
    for (int i = 0; i < n; i++) {
        getline(cin, text[i]);
    }

    for (int i = 0; i < n; i++) {
        stringstream input(text[i]);
        string word;
        while (input >> word) {
            cout << abbreviateWord(word) << '\n';
        }
    }

    return 0;
}
