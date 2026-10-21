#include <bits/stdc++.h> 
using namespace std;
#define FIN ios::sync_with_stdio(0);cout.tie(0);cin.tie(0)
 
#include <string> 
 
 
int main() {
	FIN;
	
	int numero;
	cin >> numero;
	
	for (int i=0; i < numero; i++) {
	    
	    string palabra;
	    cin >> palabra;
	    
	    if(palabra.length() > 10) {
	     string tooLongWord = palabra[0] + to_string(palabra.length()-2) + palabra[palabra.length()-1];
	    
	    
	        cout << tooLongWord;
	    } else {
	        cout << palabra;
	    }
	    cout << "\n";
	}
 
    
 
	
 return 0;
}