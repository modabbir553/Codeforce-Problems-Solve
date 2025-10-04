#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k, count = 0;
    cin >> n >> k;
    int num[n];
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    int k_point = num[k - 1];

    for (int j = 0; j < n; j++) {
        if (num[j] >= k_point && num[j] > 0) {
            count++;
        }
    }

    cout << count;
    return 0;
}
