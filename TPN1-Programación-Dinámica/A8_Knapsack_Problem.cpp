#include <bits/stdc++.h>
using namespace std;
 
#define FIN ios::sync_with_stdio(0);cout.tie(0);cin.tie(0)
 
int main() {
    FIN;
    
    long long n;
    long long x;
    
    cin >> n >> x;
    
    vector<int> pesos(n);
    
    vector<int> valores(n);
    
    for(int i=0; i < n; i++) {
        cin >> pesos[i];
    }
    
    for(int i=0; i < n; i++) {
        cin >> valores[i];
    }
    
    vector<int> dp(x+1,-1);
    dp[0]=0;
    
    for(int i=0; i<n; i++) {
        vector<int> next_dp(x+1, -1);
         for(int j=0; j<=x; j++){
             next_dp[j] = dp[j];
             
             if(j-pesos[i] >=0 and dp[j - pesos[i]] != -1 and dp[j-pesos[i]]+ valores[i] > dp[j]) {
                 next_dp[j] =  dp[j-pesos[i]]+ valores[i];
             } 
         }
         
        dp = next_dp;
    
        //for(int j=0; j<=x; j++) {
          //  cerr << dp[j] << " ";
        //}
        //cerr << endl;
    }
    
    cout << *std::max_element(dp.begin(), dp.end()) << "\n";
    
}