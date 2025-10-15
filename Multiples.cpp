#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a, b, max, min,temp;
    int i = 1;
    cin >> a >> b;
    if (a > b)
    {
        max = a;
        min = b;
    }
    else
    {
        max = b;
        min = a;
    }
    while (i < max)
    {
        temp = min * i;
        i++;
        if(temp == max){
            cout << "Multiples";
            return 0;
        }
    }
        cout << "No Multiples";
    return 0;
}