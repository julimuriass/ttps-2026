#include <bits/stdc++.h>  
using namespace std; 
#define FIN ios::sync_with_stdio(0);cout.tie(0);cin.tie(0) 
#include <string>  
#include <cstdlib>
 
int main() {
    FIN; 
    
    int x = 0;
    
    int cantLines;
    cin >> cantLines;
    
    int cantSumas = 0;
    int cantRestas = 0;
    
    for (int i = 0; i < cantLines; i++) {
        string line = "";
        cin >> line;
        
        for (int j = 0; j< 3; j++) {
            
            if (line[j] == '+') {
                cantSumas ++;
            } else if (line[j] == '-') {
                cantRestas ++;
            }
        }
    }
    
    cout << (x + (cantSumas/2) - (cantRestas/2));
    
    return 0; 
    
}