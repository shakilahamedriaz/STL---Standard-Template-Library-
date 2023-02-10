#include<bits/stdc++.h>
using namespace std;

int main()
{

   list<int>li= {1,1,1,2,2,3,4,5};

   li.unique(); // pashapashi eki value rakhbe na i mean sob unique kore dibe .

   for(auto it: li)
   { 
    
    cout<<it<< " ";

   }
   cout<<endl;

    return 0;
}