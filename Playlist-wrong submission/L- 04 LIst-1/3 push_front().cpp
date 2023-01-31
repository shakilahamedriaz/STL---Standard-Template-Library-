#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int>li;

    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    li.push_front(9);


    list<int>::iterator it;




    cout<< "using auto iterator"<<endl;

    for(auto it: li)
    {

        cout<<it<<endl;
    }
    cout<<endl;

    return 0;
}


