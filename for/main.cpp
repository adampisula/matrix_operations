#include "iostream"

using namespace std;

int main(void)
{
    int x = 0;

    cout << "Wpisz ile razy petla ma byc wykonana: ";
    cin >> x;

    for(int i = 0; i < x; i++)
    {
        cout << "Petla wykonana " << i << " raz." << endl;
    }

    return 0;
}