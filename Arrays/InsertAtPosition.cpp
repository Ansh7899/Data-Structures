//assuming that array has empty space to insert a value
//entering an element at 3rd position
#include <iostream>
using namespace std;
int main()
{
    int a[10] = {1, 2, 3, 4, 9};
    //moving every element one place towards right
    for (int i = 4; i >= 2; i--)
        a[i + 1] = a[i];
    //adding element at 3rd position
    a[2] = 5;
    //displaying the new array
    for (int i = 0; i < 6; i++)
        cout << a[i] << "\t";
}