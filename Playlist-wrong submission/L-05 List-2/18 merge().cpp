#include<bits/stdc++.h>
using namespace std;

int main()
{

  list<int> li= {1,2,3,4,5,6};
  list<int> li2= {3,4,5,6,7,8};

li.merge(li2);   //li er moddhe li2 merge hoye jabe ekta list er moto kore.
//must be sorted after use merge operatioin.


for(auto it: li) cout<<it<< " ";
cout<<endl;

//afteer merge li2 in li.there will no availabe value in li.
//let me check by size : 

cout<< "now li2 size is : "<<li2.size()<<endl;

    return 0;
}