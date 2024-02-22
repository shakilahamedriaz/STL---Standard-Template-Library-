#include <bits/stdc++.h>
using namespace std;


int  primeFactorization(int n)
{
    int list[128];
    int listSize=0;

    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                n /= i;
                list[listSize] = i;
                listSize++;
            }
        }
    }

    for(int i=0; i<listSize; i++)
    {
        cout<< list[i]<< " ";
    }
}

int main()
{
    int n;
    cin >> n;

    primeFactorization(n);

    return 0;
}
