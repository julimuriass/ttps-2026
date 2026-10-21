#include <bits/stdc++.h>
using namespace std;
#include <vector>
 
#define FIN ios::sync_with_stdio(0);cout.tie(0);cin.tie(0)
 
long long MOD =1e9+7;
typedef long long ll;
 
 
int main() {
    FIN;
    ll n, x;
    
    cin >> n >> x;
    
    vector<ll> coins(n);
    for(int i = 0; i < n; i ++) cin >> coins[i]; // Read the coins.
    
    vector<ll> count(x+1);
    count[0] = 1;
    
    
    for(int j = 1; j <= x; j ++) { // voy de 1 hasta el nro al que quiero llegar
        for(ll c: coins) { // para cada moneda
            if(j-c >= 0) { // si el nro actual - el valor de la moneda es mayor o igual a 0
                count[j] += count[j-c];
                
                if (count[j] >= MOD) // sii es necesario aplicarle el mod
                    count[j] -= MOD; // se lo aplico
            }
        }
    }
    
    cout << count[x] << "\n";
    
    return 0;
}