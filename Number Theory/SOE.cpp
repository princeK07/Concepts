/*
Time Complexity: O(n*log(log(n)))
*/

#include<bits/stdc++.h>
using namespace std;

void sieve_of_eratosthenes(){
  int n; cin>>n;
  vector<bool> isPrime(n+1, true);
  isPrime[0]=isPrime[1]=false;

  for(int i=2; i*i<=n; i++){
    if(isPrime[i]){
      for(int j=i*i; j<=n; j+=i){
        isPrime[j]=false;
      }
    }
  }
}

int main(){
  sieve_of_eratosthenes();
  return 0;
}
