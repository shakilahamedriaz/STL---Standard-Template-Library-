#include <bits/stdc++.h>
using namespace std;


int  primeFactorization(int n)
{
    map<int, int> mp;

    for (int i = 2; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                n /= i;
                 mp[i]++;
            }
        }
    }

    for(auto it: mp)
    {
        
        cout<<it.first<< "^"<<it.second<< " ";
    }
}

int main()
{
    int n;
    cin >> n;

    primeFactorization(n);

    return 0;
}
