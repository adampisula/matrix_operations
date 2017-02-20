#include "iostream"

using namespace std;

int main(void)
{
    int liczba = 0;
    
    cout << "Podaj liczbe od 1 do 10: ";
    cin >> liczba;

    if(liczba >= 1 && liczba <= 10)
    {
        cout << "Twoja liczba to " << liczba;
    }
    else
    {
        cout << "Podales zla liczbe!";
    }

    cout << endl;
    
    return 0;
}