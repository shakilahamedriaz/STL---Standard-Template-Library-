#include<bits/stdc++.h>
using namespace std;

int main(){

   list<int>li= {1,2,3,2,2,4,5,6,7,8};
   li.remove(2);
   for(auto it: li){
    cout<<it<< " ";
   }
   cout<<endl;

    return 0;
}