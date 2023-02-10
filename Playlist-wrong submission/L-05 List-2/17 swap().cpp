#include<bits/stdc++.h>
using namespace std;

int main()
{

   list<int>li={1,4,3};
   list<int>li2={1,1,1,5};

   li.swap(li2);  // (swap li-->li2)


   for(auto it: li){
   
   cout<<it<< " ";

   }
   cout<<endl;

   for(auto it: li2){
   
   cout<<it<< " ";

   }
   cout<<endl;



    return 0;
}