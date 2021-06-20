#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 14, 18, 19, 43, 90};
    int b[] = {0, 25, 29, 31, 90, 78, 101};

    int na = sizeof(a) / sizeof(a[0]);
    int nb = sizeof(b) / sizeof(b[0]);
    int c[na + nb];
    int i = 0, k = 0, j = 0;
    while (i < na && j < nb)
    {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }
    while (i < na)
        c[k++] = a[i++];
    while (j < nb)
        c[k++] = b[j++];
    for (int i = 0; i < na + nb; i++)
        cout << c[i] << "\t";
}