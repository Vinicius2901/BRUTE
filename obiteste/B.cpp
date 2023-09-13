#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q, type, eng, respar, resimpar, ans = 0;

    cin >> n >> q;

    vector <int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < q; i++)
    {
        cin >> type >> eng;
        switch (type)
        {
        case 1:
            if (eng % 2 == 0)
            {
                respar = a[eng];
                resimpar = -a[eng];
            }
            else
            {
                resimpar = a[eng];
                respar = -a[eng];
            }
            
            break;
        case 2:
            ans = x[eng];
            if(eng % 2 == 0)
            {
                ans += respar/
            }
        }
    }
}