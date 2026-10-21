#include <bits/stdc++.h>  
using namespace std; 
#define FIN ios::sync_with_stdio(0);cout.tie(0);cin.tie(0) 
#include <string>  
#include <cstdlib>
#include <cctype>
 
 
int main() {
    FIN; 
    
    long long n; 
    cin >> n;
    
    long long xMayor = 0;
    long long xMenor = pow(10, 9);
    long long yMayor = 0;
    long long yMenor = pow(10, 9);
    
    long long x, y;
    for(long long i = 0; i < n; i++) {
        cin >> x;
        cin >> y;
        
        if(x <= xMenor) {
            xMenor = x;
        }
        
        if(x >= xMayor) {
            xMayor = x;
        }
        
        if(y <= yMenor) {
            yMenor = y;
        }
        
        if(y >= yMayor) {
            yMayor = y;
        }
    }
    
    xMayor++;
    yMayor++;
    xMenor--;
    yMenor--;
    
    long long ancho = 0;
    long long largo = 0;
    
    ancho = xMayor - xMenor;
    largo = yMayor - yMenor;
 
   
    cout << (2*ancho + 2*largo);
    return 0;
}