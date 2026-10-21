#include <bits/stdc++.h>
using namespace std;
#include <vector>
 
#define FIN ios::sync_with_stdio(0);cout.tie(0);cin.tie(0)
 
long long MOD =1e9+7;
typedef long long ll;
const ll INF = 1e18+7;
 
 
vector<ll> sums;
 
ll solve(ll n) {
    if(n <= 6) return sums[n]; // Los valores hardcodeados que tengo.
    if(sums[n] != -1) return sums[n];
    
    ll accumulated_sum = 0; // Inicializo unavariable auxiliar en 0.
    for(int i = n-6; i < n; i++) { // Arranco desde el valor-6, hasta ese valor-1.
        accumulated_sum += solve(i) % MOD; // Llamada rec. le paso n-6 en el 1er caso
    }
    sums[n] = accumulated_sum % MOD;
    return accumulated_sum % MOD;
}
 
 
int main() {
    FIN;
    ll n;
    
    cin >> n;
    
    sums.assign(n + 7, -1);
    
    sums[0] = 0;
    sums[1] = 1;
    sums[2] = 2;
    sums[3] = 4;
    sums[4] = 8;
    sums[5] = 16;
    sums[6] = 32;
    
    
    
    
    cout << solve(n) << "\n";
    
}