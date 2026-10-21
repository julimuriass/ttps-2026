#include <bits/stdc++.h>
using namespace std;
#include <vector>
 
#define FIN ios::sync_with_stdio(0);cout.tie(0);cin.tie(0)
 
long long MOD =1e9+7;
 
int main() {
    FIN;
 
    long long k;
    cin >> k;
    
    vector<long long> vectorBase (5,1);
    
    
    for(long long i = 1; i < k ;i++){
        vector<long long> vectorSiguiente = vectorBase;
        
        for(int j = 0; j<5; j ++) {
            
            if(j >= 0 and j < 5) {
                if (j == 0) {
                    vectorSiguiente[j] = vectorBase[j+1]% MOD;
                } else {
                    if (j== 4) {
                        vectorSiguiente[j] = vectorBase[j-1]% MOD;
                    } else {
                        vectorSiguiente[j] = (vectorBase[j-1] + vectorBase[j+1])% MOD;
                    }
                }
            }
         //cout << vectorSiguiente[j] << "\n";
        }
        vectorBase = vectorSiguiente;
 
    }
    
    long long contador = 0;
    for(int i = 0; i < 5; i++) {
        contador += vectorBase[i] % MOD;
    }
    
    cout << contador % MOD << "\n";
    
}