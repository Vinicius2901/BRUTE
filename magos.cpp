#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j, somadp = 0,somads = 0;
    cin >> n;
    int x = n;
    vector <int> somal(n);
    vector <int> somac(n);
    vector <int> linha(n);
    vector <int> coluna(n);
    vector <vector <int>> matriz (n,vector<int>(n));
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> matriz[i][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            somal[i] += matriz [i][j];
            if (i == j)
            {
                somadp += matriz [i][j];
            }
        }
    }
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < n; i++)
        {
            somac[j] += matriz [i][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        somads += matriz[i][x-1];
        x--;
    }
    for (i = 0; i < n-1; i++)
    {
        if(somal[i] == somal[i+1])
        {
            
        }
    }

    //for (i = 0; i < n; i++)
    //{

    //}
    cout << somads << endl;
    return 0;
}
