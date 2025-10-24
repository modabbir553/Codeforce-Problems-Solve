// #include <iostream>
// using namespace std;

// int main() {
// ios_base::sync_with_stdio(false);
// cin.tie(0);
// cout.tie(0);
//     char str[1000001];
//     cin.getline(str, 1000001);
//     int sum = 0;

//     for(int i = 0; str[i] != '\0'; i++){
//         sum += (int) str[i];
//     }
//     cout << sum;
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     char str[20];

//     scanf("%s",&str);
//     printf("%s", str);
//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main() {
    char s1[10];
    char s2[10];

    scanf("%s %s",&s1, &s2);

    int v = strcmp(s1, s2);
    printf("%d", v);

    int ar [10] = {0};
    printf("%d",ar[0]);

    return 0;
}