// Primer approach: 
#include <bits/stdc++.h>
using namespace std;
#include <vector>
 
#define FIN ios::sync_with_stdio(0);cout.tie(0);cin.tie(0)
 
long long MOD =1e9+7;
typedef long long ll;
const ll INF = 1e18+7;
 
vector<bool> ready;
vector<ll> value, coins;
 
 
 
// USING MEMOIZATION.
 
ll solve(ll x) {
    if(x < 0) return INF;
    if(x == 0) return 0;
    
    if(ready[x]) return value[x];
    
    ll best = INF;
    for(ll c: coins) {
        best = min(best, solve(x-c) + 1);
    }
    
    value[x] = best;
    ready[x] = true;
    return best;
}
 

/*#include <bits/stdc++.h>
using namespace std;
#include <vector>
 
#define FIN ios::sync_with_stdio(0);cout.tie(0);cin.tie(0)
 
long long MOD =1e9+7;
typedef long long ll;
const ll INF = 1e18+7;
 
 
vector<ll> value, coins;
 
// Ya habiendo calculado todos los valores del arreglo antes.
 
 
int main() {
    int n;
    ll desired_sum;
    
    cin >> n >> desired_sum;
    
    value.resize(desired_sum + 1);
    coins.resize(n);
    
    for(int i = 0; i< n; i++) cin >> coins[i];
    
    value[0] = 0;
    
    for(ll x = 1; x < desired_sum + 1; x++) {
        value[x] = INF;
        
        for(ll c: coins) {
            if(x-c >= 0) {
                value[x] = min(value[x], value[x-c] + 1);
            }
        }
    }
    
    
    
    ll answer = value[desired_sum];
    if(answer == INF) answer = -1;
    cout << answer << "\n";
    
}*/