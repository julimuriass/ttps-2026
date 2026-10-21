    #include <bits/stdc++.h>  
    using namespace std; 
    #define FIN ios::sync_with_stdio(0);cout.tie(0);cin.tie(0) 
    #include <string>  
    #include <cstdlib>
     
    int main() {
        FIN; 
        
        int n = 0;
        int k = 0;
        
        cin >> n;
        cin >> k;
        
        int cantAvanzan = 0;
        int notaAComparar = 0;
        int nota;
        
        for (int i = 1; i <= n; i++) {
           
            cin >> nota;
            
            if (i == k and nota != 0) {
                notaAComparar = nota;
                cantAvanzan ++;
                
            } else if (i < k and nota != 0) {
                cantAvanzan ++;
                
            } else if (i > k and nota == notaAComparar and nota != 0){ 
                cantAvanzan ++;
                
            }
            
        }
        
     
        cout << cantAvanzan;
        
        return 0; 
        
    }

[close]
