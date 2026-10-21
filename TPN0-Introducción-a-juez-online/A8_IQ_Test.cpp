#include <bits/stdc++.h>  
using namespace std; 
#define FIN ios::sync_with_stdio(0);cout.tie(0);cin.tie(0) 
#include <string>  
#include <cstdlib>
#include <cctype>
 
 
int main() {
    FIN; 
    
    int n = 0;
    cin >> n;
    
    int cantPar = 0;
    int cantImpar = 0;
    int posUltimoPar = 0;
    int posUltimoImpar = 0;
    
    int num;
    
    
    for(int i = 0; i < n; i ++) {
        cin >> num;
        
        if(num % 2 == 0) {
            cantPar++;
            posUltimoPar = i;
        } else {
            cantImpar++;
            posUltimoImpar = i;
        }
    }
    
    if(cantImpar > cantPar) {
        cout << posUltimoPar+1;
    } else {
        cout << posUltimoImpar+1;
    }
 
    return 0; 
    
}