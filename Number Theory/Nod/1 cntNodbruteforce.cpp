#include<bits/stdc++.h>
using namespace std;


 void countDivisor(long long n)
{
    int divisor=0;
    

    for(long long i=1; i<=n; i++)
    {
        if(n%i == 0)
        {   
            cout<< i << " ";
            divisor++;
        }

    }
    cout<<endl;
    cout<< "total divisor's"<<divisor<<endl;
}

int main()
{
    long long n; cin >>n;

    countDivisor(n);

    return 0;
}