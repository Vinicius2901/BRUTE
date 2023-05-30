#include<bits/stdc++.h>
 
 using namespace std;

int main(){
int n, x;
cin >> n;
x = n;
int matriz [n+1][n+1];
vector<int> somalinhas(n+1);
vector<int> somaColunas(n+1);
int somadiagonal1 = 0;
int somadiagonal2 = 0;
for(int i = 1; i <= n;i++){
    for(int j = 1; j <= n; j++){
        cin >> matriz [i][j];
    }
}
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            somaColunas[i] += matriz[j][i];
            somalinhas[i] += matriz[i][j];
            if(i==j){
            somadiagonal1 += matriz [i][j];
            }      
        }
    }

    while(x > 0){
            somadiagonal2 += matriz [x][n-(x-1)];
            x--;
    }

    int somalinha = somalinhas[1];
    bool col = false, lin = false;
    for (int i = 1; i <= n; i++){
        if (somalinha == somalinhas[i]){
            lin = true;
        }else{ 
            lin = false;
        }

        if (somalinha == somaColunas[i]){
            col = true;
        }else{
            col = false;
        }
    }

    
    if (somadiagonal1==somadiagonal2 && col && lin && somadiagonal1 == somalinha){    
        cout << somadiagonal1 << endl;
        return 0;
    }
    else{
        cout << "-1" << endl;
        return 0;
    }
}
