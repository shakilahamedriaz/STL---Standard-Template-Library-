#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    /*
       a       b     rem
       18  %   12     6
       12   %  6      0
       6   %   0   .......

       here last a=b, and b=0, 
       so a is gcd.
    
    */
    while(b!=0)
    {
        int rem=a%b;
        a=b;
        b=rem;
    }

    int ans=a;
    return ans;
}

int main()
{
    int a, b;
    cin >>a>>b;

   cout<< gcd(a, b);
    

    return 0;
}