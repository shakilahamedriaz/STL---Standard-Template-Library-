/*Iterators are used to point
 at the memory addresses of STL
 containers. They are primarily
 used in sequences of numbers,
characters etc.

//specefic point niye ota niye play kora jay

*/

#include<bits/stdc++.h>
using namespace std;

int main(){

vector<int>v;

v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);

vector<int>::iterator it;


cout<< "USe iteration print : "<<endl;

for(it=v.begin(); it!=v.end(); it++){


    cout<<*it<<endl;  // must use point [*it] here it=iteration_name.

}

return 0;
}

