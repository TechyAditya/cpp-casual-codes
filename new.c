#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a[10][10], b[10][10], result[10][10], i, j, k, r1, r2, c1, c2;
    cout << "enter the 1st matrics row & coloum :";
    cin >> r1 >> c1;
    cout << "enter the 2nd matrics row & coloum :";
    cin >> r2 >> c2;
    if (c1 != r2)
    {
        cout << "since your 2 matrics row and coloum are not same so give same row2 and coloum1! :";
        cout << "enter the 1st matrics row & coloum :";
        cin >> r1 >> c1;
        cout << "enter the 2nd matrics row & coloum :";
        cin >> r2 >> c2;
    }
    cout << "\nenter the 1st matrics :";
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            cin >> a[i][j];
        }
    }
    for (i = 0; i < r1; i++)
    {
        cout << endl;
        for (j = 0; j < c1; j++)
        {
            cout << a[i][j] << " ";
        }
    }
    cout << "\nenter the 2nd matrics :";
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            cin >> b[i][j];
        }
    }
    for (i = 0; i < r2; i++)
    {
        cout << endl;
        for (j = 0; j < c2; j++)
        {
            cout << b[i][j] << " ";
        }
    }
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            result[i][j] = 0;
            for (k = 0; k < c1; k++)
            {
                result[i][j] += a[i][k] * b[k][i];
            }
        }
    }
    cout << "\nProduct is: \n";
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            cout <<  result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}