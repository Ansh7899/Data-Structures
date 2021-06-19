#include <iostream>
using namespace std;
int main()
{
    int arr[] = {4, 0, 8, 0, 0, 1, 2, 3, 0, 0, 1, 0, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 0, temp;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            temp = arr[i];
            arr[i] = arr[k];
            arr[k] = temp;
            k += 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}