#include "iostream"

using namespace std;

int main(void)
{
    int x = 0;

    cout << "Wpisz ile razy petla ma byc wykonana: ";
    cin >> x;

    int i = 0;

    while(i < x)
    {
        cout << "Petla wykonana " << i << " raz." << endl;

        i++;
    }

    return 0;
}