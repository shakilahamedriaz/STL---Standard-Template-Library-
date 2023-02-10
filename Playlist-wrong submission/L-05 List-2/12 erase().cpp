#include<bits/stdc++.h>
using namespace std;

int main()
{


  list<int>li= {1,2,3,4,5,6};

  list<int>::iterator it;
  it=li.begin();  //for point
   
  li.erase(it);   //for point location
  advance(it, 3);

  for(auto it: li){ //for output
    
    cout<<it<< " ";

  }
  cout<<endl;

  //learn again this erase(); function to clear concept.
  




    return 0;
}