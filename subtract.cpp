#include "iostream"

using namespace std;

int main(void)
{
    int m1x = 0;
    int m1y = 0;
    int m2x = 0;
    int m2y = 0;

    //CREATING FIRST MATRIX
    cout << "Type in matrix' width: ";
    cin >> m1x;
    cout << "Type in matrix' height: ";
    cin >> m1y;

    //CREATING SECOND MATRIX
    //MATRICES MUST HAVE EQUAL DIMENSIONS
    /*cout << "Type in second matrix' width: ";
    cin >> m2x;
    cout << "Type in second matrix' height: ";
    cin >> m2y;*/

    m2x = m1x;
    m2y = m1y;

    cout << endl;

    //FIRST MATRIX
    int m1[m1x][m1y];

    //SECOND MATRIX
    int m2[m2x][m2y];

    //FILLING IN FIRST MATRIX
    cout << "First matrix:" << endl;

    for(int i = 1; i <= m1y; i++)
    {
        cout << "\t" << "Row " << i << ": " << endl;

        for(int j = 1; j <= m1x; j++)
        {
            cout << "\t\t";
            cout << "Cell(" << j << "," << i << ") = ";
            cin >> m1[j - 1][i - 1];
        }

        cout << endl;
    }

    //FILLING IN SECOND MATRIX
    cout << "Second matrix:" << endl;

    for(int i = 1; i <= m2y; i++)
    {
        cout << "\t" << "Row " << i << ": " << endl;

        for(int j = 1; j <= m2x; j++)
        {
            cout << "\t\t";
            cout << "Cell(" << j << "," << i << ") = ";
            cin >> m2[j - 1][i - 1];
        }

        cout << endl;
    }

    //PRINTING MATRICES OUT
    int choice = 0;

    cout << endl << "Print matrices out? [1/0]: ";
    cin >> choice;

    cout << endl;

    if(choice != 0)
    {
        //PRINTING FIRST MATRIX OUT
        cout << "First matrix:" << endl;

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

        //PRINTING SECOND MATRIX OUT
        cout << "Second matrix:" << endl;

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

    //RESULT
    int result[m1x][m1y];

    cout << endl;
    cout << "Calculating... "; 

    for(int i = 0; i < m1y; i++)
    {        
        for(int j = 0; j < m1x; j++)
        {
            result[j][i] = m1[j][i] - m2[j][i];
        }
    }

    cout << "Finished." << endl;
    cout << endl;
    cout << "Result:" << endl;

    for(int i = 0; i < m1y; i++)
    {
        for(int j = 0; j < m1x; j++)
        {       
            if(result[j][i] < 10)
            {
                cout << "   ";
            }
            
            else if(result[j][i] < 100)
            {
                cout << "  ";
            }
            
            else if(result[j][i] < 1000)
            {
                cout << " ";
            }
            
            cout << result[j][i] << " ";
        }

        cout << endl;
    }

    return 0;
}