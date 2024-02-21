#include<bits/stdc++.h>
using namespace std;


 void countDivisor(long long n)
{
    int divisor=0;
    
    for(long long i=1; i*i<=n; i++)
    {
       if(i*i == n)
       {
          divisor+=1;
       }
       else if(n%i == 0)
       {
            divisor+=2;
       }
    
    }

    cout<< "total divisor's"<<divisor<<endl;
}

int main()
{
    long long n; cin >>n;

    countDivisor(n);

    return 0;
}