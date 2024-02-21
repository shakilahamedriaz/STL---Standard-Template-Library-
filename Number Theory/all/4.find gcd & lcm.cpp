#include<bits/stdc++.h>
using namespace std;

int gcd(int num1, int num2)
{
    while(num2!=0)
    {
        int rem=num1%num2;
            num1=num2;
            num2=rem;
    }

    return num1;
}

int main()
{
    int tc;
    cin >>tc;

    while(tc--)
    {
        int num1, num2;
        cin >>num1 >> num2;
        int a=num1, b=num2;

        int G=gcd(num1, num2);
        
        int l = (a*b)/G;

        cout<<G<< " " <<l<<endl;
    }

    return 0;
}