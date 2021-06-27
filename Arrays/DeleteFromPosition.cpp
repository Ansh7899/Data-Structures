#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(a) / sizeof(a[0]);
    //delete the element at 5 position
    for (int i = 4; i < n; i++)
        a[i] = a[i + 1];
    for (int i = 0; i < n - 1; i++)
        cout << a[i] << "\t";
    return 0;
}