#include<bits/stdc++.h>
using namespace std;

int main()
{

   list<int>li= {4,1,1,2,88,6,5};

   li.sort();

   for(auto it: li)
   { 
    
    cout<<it<< " ";

   }
   cout<<endl;

    return 0;
}