#include <bits/stdc++.h>  
using namespace std; 
#define FIN ios::sync_with_stdio(0);cout.tie(0);cin.tie(0) 
#include <string>  
#include <cstdlib>
#include <cctype>
 
 
int main() {
    FIN; 
    
    string word;
    cin >> word;
    
    char puedeBorrar = 'N';
    
    if((word.find('T') != string::npos) and (word.find('A') != string::npos) and (word.find('P') != string::npos)) {
        
        int anterior = -1;
        
        int i = 0;
        while((puedeBorrar == 'N') and (i < 11)) {
            
            if((word[i] == 'T') and (anterior == -1)) {
                anterior = i;
            }
            
            if((word[i] == 'A') and (word[anterior] == 'T')) {
                anterior = i;
            }
            
            if((word[i] == 'P') and (word[anterior] ==  'A')) {
                puedeBorrar = 'S';
            }
            
            i++;
        }
    }
 
   
    cout << puedeBorrar;
    return 0;
}
 