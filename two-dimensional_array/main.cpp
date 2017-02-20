#include "iostream"

using namespace std;

int main(void)
{
    int sizex = 0;
    int sizey = 0;

    cout << "Podaj szerokosc tablicy: ";
    cin >> sizex;
    cout << "Podaj wysokosc tablicy: ";
    cin >> sizey;

    int array[sizex][sizey];

    for(int i = 1; i <= sizey; i++)
    {
        for(int j = 1; j <= sizex; j++)
        {
            array[j - 1][i - 1] = j * i;
        }
    }

    cout << endl;
    cout << "Rozmiar tablicy: " << sizex << "x" << sizey << endl;
    cout << endl;

    for(int i = 0; i < sizey; i++)
    {
        for(int j = 0; j < sizex; j++)
        {       
            if(array[j][i] < 10)
            {
                cout << "   ";
            }
            
            else if(array[j][i] < 100)
            {
                cout << "  ";
            }
            
            else if(array[j][i] < 1000)
            {
                cout << " ";
            }
            
            cout << array[j][i] << " ";
        }

        cout << endl;
    }

    return 0;
}