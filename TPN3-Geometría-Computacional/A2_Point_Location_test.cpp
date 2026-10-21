#include <bits/stdc++.h>
using namespace std;
#include <vector>
 
#define FIN ios::sync_with_stdio(0);cout.tie(0);cin.tie(0)
 
long long MOD =1e9+7;
typedef long double ld;
typedef long long tipo;
 
struct Punto{
    tipo x, y;
    
    Punto operator -(Punto p) const {return {x-p.x, y-p.y};}
    tipo mod() {return sqrtl(x*x + y*y);}
    
    
    tipo operator ^(Punto p) const {return x*p.y - y*p.x;}
};
    
    
int main() {
    FIN;
 
    int t; cin >> t;
    
    while (t--) {
        Punto p1, p2, p3;
        cin >> p1.x >> p1.y;
        cin >> p2.x >> p2.y;
        cin >> p3.x >> p3.y;
        
        Punto v1 = p2-p1;
        Punto v2 = p3-p2;
        
        tipo aux = v1^v2;
        
        if (aux > 0) {
            cout << "LEFT\n";
        } else if (aux < 0) {
            cout << "RIGHT\n";
        } else { 
            cout << "TOUCH\n";
        }
    }
    
    return 0;
 
}