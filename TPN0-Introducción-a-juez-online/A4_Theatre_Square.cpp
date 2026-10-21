#include <bits/stdc++.h>  
using namespace std; 
#define FIN ios::sync_with_stdio(0);cout.tie(0);cin.tie(0) 
#include <string>  
#include <cstdlib>
 
int main() {
    FIN; 
    
    long long a;
    long long n;
    long long m;
    
    cin >> n;
    cin >> m;
    cin >> a;
    
    //chequeo m
    //largo inicial que necesito: m div a (sin redondeo)
    //si m mod a != 0 -> largo que necesito++
    
    //same para n 
    
    //cout nxm
    
    long long anchoNecesitado = m / a;
    long long largoNecesitado = n / a;
        
    if ((m % a) != 0) {
        anchoNecesitado++;
    }
    
    if ((n % a) != 0) {
        largoNecesitado++;
    }
    
    cout << largoNecesitado * anchoNecesitado;
    return 0; 
    
}