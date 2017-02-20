#include "iostream"

using namespace std;

int main(void)
{
    int x = 0;
    int y = 0;
    int z = 0;

    cout << "Podaj x: ";
    cin >> x;
    cout << "Podaj y: ";
    cin >> y;

    z = x * y;

    cout << "x * y = ";
    cout << z << endl;

    return 0;
}