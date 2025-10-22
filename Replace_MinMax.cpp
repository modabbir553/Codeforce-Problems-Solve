#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, max, maxindx, min, minindx;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (i == 0)
        {
            max = arr[i];
            min = arr[i];
            maxindx = i;
            minindx = i;
        }
        else if (max < arr[i])
        {
            max = arr[i];
            maxindx = i;
        }
        else if (min > arr[i])
        {
            min = arr[i];
            minindx = i;
        }
    }

    arr[maxindx] = min;
    arr[minindx] = max;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}