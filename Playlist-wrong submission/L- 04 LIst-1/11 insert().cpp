#include<bits/stdc++.h>
using namespace std;

int main()
{

 list<int>li;
 li.push_back(1);
 li.push_back(5);
 li.push_back(6);


 li.insert(li.begin(),4);

 for(auto it: li)
 {

    cout<<it<< " ";
 }
 cout<<endl;

    return 0;
}