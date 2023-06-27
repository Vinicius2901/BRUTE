#include <bits/stdc++.h>

using namespace std;

const int maxn = 205; 
vector<int> adj[maxn];
bool vis[maxn];
int cnt = 0; 
void dfs (int u)
{
    vis[u] = 1;
    for (int i = 0; i < adj[u].size(); i++) {
        int v = adj[u][i]; 
        if (!vis[v]) {
            cnt++;
            dfs(v);
        }  
    }
}

int main()
{
    int s, t, p;
    cin >> s >> t >> p;
    vector <int> gru(s);
    for (int i = 0; i < s; i++)
    {
        cin >> gru[i];
    }

    for (int i = 0; i < t; i++)
    {
        int u, v;
        cin >> u >> v;
        if (gru[u-1] > gru[v-1])
        {
            adj[u].push_back(v);
        }
        else if (gru[v-1] > gru[u-1])
        {
            adj[v].push_back(u);
        }
    }
    dfs(p);

    cout << cnt << endl;
    return 0;
}
