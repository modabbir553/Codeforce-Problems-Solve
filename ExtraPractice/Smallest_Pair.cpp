#include <iostream>
using namespace std;

int main()
{
    int n1;
    cin >> n1;

    for (int m = 0; m < n1; m++)
    {
        int n2;
        cin >> n2;
        int arr[n2];
        int sum = 0;
        int minsum = 0;

        for (int k = 1; k <= n2; k++)
        {
            cin >> arr[k];
        }

        for (int i = 1; i < n2; i++)
        {
            for (int j = i + 1; j <= n2; j++)
            {
                sum = arr[i] + arr[j] + j - i;

                if (j == 2)
                {
                    minsum = sum;
                }

                else if (minsum > sum)
                {
                    minsum = sum;
                }
            }
        }

        cout << minsum << endl;
    }

    return 0;
}