#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, maior = 0, maiori = 0;

    cin >> n;
    vector <int> x(n);
    vector <int> count(1e5 + 1);

    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    for (int i = 0; i < n; i++)
    {
        count[i] = 0;
        if (x[i] > maior)
        {
            maior = x[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 2; j*j <= x[i]; j++)
        {
            if (x[i] % j == 0)
            {
                while (x[i] % j == 0) x[i] /= j;
                count[j]++;
            }
        }
        if(x[i] > 1) count[x[i]]++;
    }
    for (int i = 0; i <= maior; i++)
    {
        if(count[i] > count[maiori])
        {
            maiori = i;
        }
    }
    cout << count[maiori] << endl << maiori << endl;
}