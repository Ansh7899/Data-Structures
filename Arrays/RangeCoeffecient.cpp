#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 312, 2, 234, 24, 134, 46, 346, 23};
    int min = INT_MAX, max = INT_MIN;

    for (int i = 0; i < 9; i++)
    {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
    cout << "\nRange: " << max - min << "\nCoefficient of Range: " << max - min / max + min;
    return 0;
}