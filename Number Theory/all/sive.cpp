#include<bits/stdc++.h>
using namespace std;


vector<bool> prime(n+1, true); 

void sieve(int n) {

    prime[0]=false;
    prime[1]=false;

    for (int i = 2; i*i <= n; i++) {

        if (prime[i] == true)
        {
            for (int j = i*i; j <= n; j += i)
            prime[j] = false;
        }
    } 

    
    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
        cout << i << " ";
    }
}

int main() {

    long long n;
    cin >> n;

    sieve(n);

    return 0;
}
