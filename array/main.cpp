#include "iostream"
#include "math.h"

using namespace std;

int main(void)
{
    int size = 0;

    cout << "Podaj rozmiar tablicy: ";
    cin >> size;

    int array[size];

    for(int i = 1; i <= size; i++)
    {
        array[i - 1] = pow(i, 2);
    }

    cout << endl;
    cout << "Rozmiar tablicy: " << sizeof(array) << endl;
    cout << endl;

    for(int i = 0; i < size; i++)
    {
        cout << "array[" << i << "] = " << array[i] << endl;
    }

    return 0;
}