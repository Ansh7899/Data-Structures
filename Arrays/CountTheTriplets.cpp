#include <iostream>
using namespace std;
int main()
{
    int n, k = 0;
    cin >> n;
    int a[n];
    int sum[2 * n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            k += 1;
            sum[k] = a[i] + a[j];
        }
    }
    int size = sizeof(sum) / sizeof(sum[0]);
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (sum[i] == a[j])
            {
                count++;
            }
        }
    }
    cout << "\n"
         << count;
    return 0;
}