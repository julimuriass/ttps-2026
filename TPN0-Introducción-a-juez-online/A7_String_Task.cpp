#include <bits/stdc++.h>  
using namespace std; 
#define FIN ios::sync_with_stdio(0);cout.tie(0);cin.tie(0) 
#include <string>  
#include <cstdlib>
#include <cctype>
 
bool esVocal(char c) {
    if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u' or c == 'y') {
        return true;
    }
    
    return false;
}
 
 
 
int main() {
    FIN; 
    
    string word = "";
    cin >> word;
    char punto = '.';
    
    for(int i = 0; i < word.size(); i++) {
        
        // Convierto de mayúsculas a minúsculas.
        word[i] = tolower(word[i]);
        
        
        // Elimino vocales.
        if (esVocal(word[i])) {
            word.erase(i, 1);
            i--;
        } 
    }
    
    for(int j = 0; j < word.size(); j = j+2) {
        
        word.insert(j, 1, punto); 
    }
    
 
    cout << word;
    
    return 0; 
    
}