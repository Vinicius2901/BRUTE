#include <bits/stdc++.h>

using namespace std;

int main()
{
  int pontos = 1;
  int maior = INT_MIN;
  int sequencia = 0;
  int n;
  cin >> n;
  vector <int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  a.push_back (a.back()+1);
  for (int i = 0; i < n; i++)
  {
    if (a[i] == a[i+1])
    {
      pontos++;
    }
    else
    {
      if (maior <= pontos)
      {
        maior = pontos;
      }
      pontos = 1;
    }
  }
  cout << maior << endl;
}
