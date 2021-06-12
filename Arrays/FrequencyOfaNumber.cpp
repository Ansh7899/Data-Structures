#include <iostream>
using namespace std;
// size can be increased by taking INT_MAX value
// For this code purpose I am assuming that max value in an array is 100
// therefore defining max as 100
#define max 100

int main()
{
    int n, ele;
    cout << "\nEnter the size of array: ";
    cin >> n;
    int a[n];
    int count[max] = {0};
    cout << "\nEnter the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        count[a[i]] += 1;
    }
    cout << "\nEnter the element whose frequency you want to find? ";
    cin >> ele;
    if (count[ele] == 0)
    {
        cout << "\nElement not present..";
    }
    else
    {
        cout << "\nFrequency of " << ele << "is : " << count[ele];
    }
    return 0;
}