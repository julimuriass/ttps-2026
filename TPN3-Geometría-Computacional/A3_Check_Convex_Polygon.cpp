#include <bits/stdc++.h>
using namespace std;
#include <vector>
 
#define FIN ios::sync_with_stdio(0);cout.tie(0);cin.tie(0)
 
//long long MOD =1e9+7;
typedef long double tipo;
 
struct Punto{
    tipo x, y;
    
    Punto operator -(Punto p) const {return {x-p.x, y-p.y};}
    tipo mod() {return sqrtl(x*x + y*y);}
    
    
    tipo operator ^(Punto p) const {return x*p.y - y*p.x;}
};
    
    
int main() {
    FIN;
 
    int n; cin >> n;
    
    vector<Punto> puntos(n);
    
    // Leo todos los puntos
    for(int i = 0; i < n; i ++) {
        tipo x, y;
        cin >> x >> y;
        puntos[i] = {(tipo)x, (tipo)y};
 
    }
    
    
    bool va_encaminado = true;
    int i = 0; 
    Punto anterior;
    bool horario_reloj = true;
    
    while(va_encaminado and i < n){
        
        // Hay que ver si nos llega un polígono en horario reloj o no.
        Punto v1;
 
        
        // Hacer los vectores:
        if(i != n-1){
            v1 = puntos[i+1] - puntos[i];
        } else {
            v1 = puntos[0] - puntos[i]; // Lo conectamos al primer punto.
        }
        
 
        if(i == 0) {
            anterior = v1; // Para arrancar
        } else {
            tipo z = (anterior^v1);
            
            if(i == 1) { // Tenemos que identificar en que sentido gira.
                if (z < 0) {
                    horario_reloj = false; 
                }
            } else {
                if(horario_reloj) { // Si se viene cumpliendo horaro_reloj
                    if(z < 0) { // Si cambia de lo que veníamos.
                        va_encaminado = false;
                    }
                } else { // Si veníamos de horario no reloj
                    if (z >= 0){ // Si cambia 
                        va_encaminado = false;
                    }
                }
            }
            
            anterior = v1;
        }
        
        i++;
    }
    
    if(va_encaminado){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    
    return 0;
 
}