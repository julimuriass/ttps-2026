#include <bits/stdc++.h>  
using namespace std; 
#define FIN ios::sync_with_stdio(0);cout.tie(0);cin.tie(0) 
#include <string>  
#include <cstdlib>
#include <cctype>
 
 
int main() {
    FIN; 
    
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    
    int valorMaximo = 0;
    int valorActual = 0;
    
    // ax + by + cz = n
    // Hago ax + by 
    // Si lo que me falta para llegar a n (cz) es multiplo de c ->
        // Si el valor que junté es > al que tengo guardado de antes
            // Me quedo con ese último valor
            
    
            
    for(int x = 0; x <= n; x ++) {
        
        for(int y = 0; ((x*a) + (y*b)) <= n; y ++) {
            
            int sobra = n - (x*a + y*b);
            if(sobra% c == 0) {
                valorActual = x + y + (sobra/c); // x + y + z
                if (valorActual > valorMaximo) {
                    valorMaximo = valorActual;
                }
            }
        }
    }
    
    cout << valorMaximo;
    return 0;
}