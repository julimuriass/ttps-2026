#include <bits/stdc++.h>  
using namespace std; 
#define FIN ios::sync_with_stdio(0);cout.tie(0);cin.tie(0) 
#include <string>  
#include <cstdlib>
#include <cctype>
 
 
int main() {
    FIN; 
    
    int a, b, c;
    cin >> a >> b >> c;
    
    char vueltoExacto = 'N';
    
   if(((b - a) % c) == 0) vueltoExacto = 'S';
 
   
    cout << vueltoExacto;
    return 0;
}