#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y, goals;

    cin >> x >> y >> goals;

    for (int i = 0; i < goals; i++)
    {
        char who;
        cin >> who;
        switch(who)
        {
            case 'A':
                y++;
                break;
            case 'B':
                x++;
                break;
        }
    }
    if (x > y)
    {
        cout << "BRASIL" << endl;
    }
    else if (y > x)
    {
        cout << "ARGENTINA" << endl;
    }
    else
    {
        cout << "EMPATE" << endl;
    }
    return 0;
}