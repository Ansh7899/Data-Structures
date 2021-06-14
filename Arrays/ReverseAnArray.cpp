#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 41, 2, 4, 24, 21, 4, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp = 0;
    for (int i = 0, j = n - 1; i < n / 2; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    cout << "Reversed array is: " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << "\t";
    return 0;
}
