#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> icard(8);

    bool ordc = false;
    bool ordd = false;

    for (int i = 0; i < 5; i++)
    {
        cin >> icard[i];
    }
    for (int i = 1; i < 5; i++)
    {
        if(icard[i] >= icard[i-1])
        {
            ordc = true;
        }
        else if (ordc && icard[i] < icard[i-1])
        {
            ordc = false;
            break;
        }
        else if (icard[i] <= icard[i-1])
        {
            ordd = true;
        }
        else if (ordd && icard[i] > icard[i-1])
        {
            ordd = false;
            break;
        }
    }
    if (ordc)
    {
        cout << 'C' << endl;
    }
    else if (ordd)
    {
        cout << 'D' << endl;
    }
    else
    {
        cout << 'N' << endl;
    }
}