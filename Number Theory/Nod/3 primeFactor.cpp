#include<bits/stdc++.h>
using namespace std;

int primeFactorization(int n)
{
    
    for(int i=2; i<n; i++)
    {   
        int power=0;
        if(n%i==0)
        {
            while(n%2==0)
            {
                n/=i;
                cnt++;
            }
            cout<<i<< "^" <<power<< " ";
        }

    }

}

int main()
{
    int n;
    cin >>n;

    primeFactorization(n);

    return 0;
}