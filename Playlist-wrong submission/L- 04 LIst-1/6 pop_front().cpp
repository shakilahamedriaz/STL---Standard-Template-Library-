#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int>li;

    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    li.push_back(4);


    cout<< "FOR PRINT : loop use kore "<<endl;
    li.pop_front();  // 1st element use hobe na cz pop_front use korci.
    for(auto it: li)
    {
        cout<<it<< "  ";
    }



    return 0;
}