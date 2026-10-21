#include <bits/stdc++.h>  
using namespace std; 
#define FIN ios::sync_with_stdio(0);cout.tie(0);cin.tie(0) 
#include <string>  
 
int main() {
    FIN; 
    
    int numeroProblemas; 
    
    cin >> numeroProblemas;
    
    int total=0;
    
    for (int i=0; i < numeroProblemas; i++)
    { 
        int votos; 
        int cant_vot=0;
        for (int j=0; j < 3; j++){
            cin >> votos;
            if (votos == 1){
                cant_vot++;
            }
        }
         if (cant_vot > 1) {
                total=total+1;
            }
        
    }
    
    cout << total;
    return 0; 
    
}