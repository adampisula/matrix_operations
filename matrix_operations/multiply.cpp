#include "iostream"

using namespace std;

int main(void)
{
    int m1x = 0;
    int m1y = 0;
    int m2x = 0;
    int m2y = 0;

    //TWORZENIE PIERWSZEJ MACIERZY
    cout << "Podaj szerokosc pierwszej macierzy: ";
    cin >> m1x;
    cout << "Podaj wysokosc pierwszej macierzy: ";
    cin >> m1y;

    cout << endl;

    //TWORZENIE DRUGIEJ MACIERZY
    cout << "Podaj szerokosc drugiej macierzy: ";
    cin >> m2x;
    
    m2y = m1y;

    cout << endl;

    //MACIERZ PIERWSZA
    int m1[m1x][m1y];

    //MACIERZ DRUGA
    int m2[m2x][m2y];

    //UZUPELNIANIE PIERWSZEJ MACIERZY
    cout << "Macierz pierwsza:" << endl;

    for(int i = 1; i <= m1y; i++)
    {
        cout << "\t" << "Wiersz " << i << ": " << endl;

        for(int j = 1; j <= m1x; j++)
        {
            cout << "\t\t";
            cout << "Komorka(" << j << "," << i << ") = ";
            cin >> m1[j - 1][i - 1];
        }

        cout << endl;
    }

    //UZUPELNIANIE DRUGIEJ MACIERZY
    cout << "Macierz druga:" << endl;

    for(int i = 1; i <= m2y; i++)
    {
        cout << "\t" << "Wiersz " << i << ": " << endl;

        for(int j = 1; j <= m2x; j++)
        {
            cout << "\t\t";
            cout << "Komorka(" << j << "," << i << ") = ";
            cin >> m2[j - 1][i - 1];
        }

        cout << endl;
    }

    //WYPISYWANIE MACIERZY
    int choice = 0;

    cout << endl << "Wypisac macierze? [1/0]: ";
    cin >> choice;

    cout << endl;

    if(choice != 0)
    {
        //WYPISYWANIE PIERWSZEJ MACIERZY
        cout << "Macierz pierwsza:" << endl;

        for(int i = 0; i < m1y; i++)
        {
            for(int j = 0; j < m1x; j++)
            {       
                if(m1[j][i] < 10)
                {
                    cout << "   ";
                }
                
                else if(m1[j][i] < 100)
                {
                    cout << "  ";
                }
                
                else if(m1[j][i] < 1000)
                {
                    cout << " ";
                }
                
                cout << m1[j][i] << " ";
            }

            cout << endl;
        }
        
        cout << endl;

        //WYPISYWANIE DRUGIEJ MACIERZY
        cout << "Macierz druga:" << endl;

        for(int i = 0; i < m2y; i++)
        {
            for(int j = 0; j < m2x; j++)
            {       
                if(m2[j][i] < 10)
                {
                    cout << "   ";
                }
                
                else if(m2[j][i] < 100)
                {
                    cout << "  ";
                }
                
                else if(m2[j][i] < 1000)
                {
                    cout << " ";
                }
                
                cout << m2[j][i] << " ";
            }

            cout << endl;
        }
    }

    //WYNIK
    int w[m2x][m1y];
    int curr = 0;

    cout << endl;
    cout << "Obliczanie... ";

    for(int y = 0; y < m1y; y++)
    {
        for(int x = 0; x < m1x; x++)
        {
            for(int mx = 0; mx < m2x; mx++)
            {
                for(int my = 0; my < m2y; my++)
                    curr += m1[my][y] * m2[mx][my];
                
                w[mx][y] = curr;
                
                curr = 0;
            }
        }
    }

    cout << "Ukonczono" << endl;
    cout << endl;
    cout << "Wynik:" << endl;

    for(int i = 0; i < m1y; i++)
    {
        for(int j = 0; j < m2x; j++)
        {       
            if(w[j][i] < 10)
            {
                cout << "   ";
            }
            
            else if(w[j][i] < 100)
            {
                cout << "  ";
            }
            
            else if(w[j][i] < 1000)
            {
                cout << " ";
            }
            
            cout << w[j][i] << " ";
        }

        cout << endl;
    }

    return 0;
}