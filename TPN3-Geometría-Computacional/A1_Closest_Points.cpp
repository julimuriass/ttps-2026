#include <bits/stdc++.h>
using namespace std;
#include <vector>
 
#define FIN ios::sync_with_stdio(0);cout.tie(0);cin.tie(0)
 
long long MOD =1e9+7;
typedef long double ld;
 
struct Punto{
    ld x, y;
    
    Punto operator -(Punto p) const {return {x-p.x, y-p.y};}
    ld mod() {return sqrtl(x*x + y*y);}
    
};
    
    
int main() {
    FIN;
    int n; cin >> n;
    vector<Punto> v(n);
    
    // Leo los puntos.
    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        v[i] = {(ld)x, (ld)y};
    }
    
    ld rta = 1e7;
    
    
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j ++) {// i + 1 pq quiero ver todos contra todos, pero no ver a un numero contra si mismo. Y tmb hace que no vea lo mismo dado vuelta, (5,1) contra (1,5)
            Punto aux = v[i]-v[j];
            ld dist = aux.mod();
            rta = min(rta, dist);
        }  
        
    }
    
    cout << fixed << setprecision(10); 
    cout << rta << "\n";
}