#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, q, a, b;
    cin >> n >> q;
    long long aux;
    vector<int>v(n);
    vector<long long>p(n+1);
    p[0] = 0;
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    for (int i = 1; i <= n; i++){
        p[i] = p[i-1] + v[i-1];
    }

    for (int i = 0; i < q; i++){
        cin >> a >> b;
        aux = p[b] - p[a-1];
        cout << aux << endl;
    }
    
    return 0;

    
}
